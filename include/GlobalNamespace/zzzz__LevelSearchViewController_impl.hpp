#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelSearchViewController.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__LevelSearchViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "GlobalNamespace/zzzz__LevelSearchViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelSelectionOptions_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__UIKeyboardManager_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::*)()>(
    &::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0xa0c;
  constexpr static std::size_t addrs = 0x57b2c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b365c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelSearchViewController>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::LevelSearchViewController__RefreshAsync_d__35(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelSearchViewController> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__35::LevelSearchViewController__RefreshAsync_d__35() {}
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.add_didPressSearchButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*)>(&::GlobalNamespace::LevelSearchViewController::add_didPressSearchButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b1efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "add_didPressSearchButtonEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.remove_didPressSearchButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*)>(&::GlobalNamespace::LevelSearchViewController::remove_didPressSearchButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57b1fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "remove_didPressSearchButtonEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.add_didFilterBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*)>(&::GlobalNamespace::LevelSearchViewController::add_didFilterBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57af434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "add_didFilterBeatmapLevelCollectionEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.remove_didFilterBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*)>(&::GlobalNamespace::LevelSearchViewController::remove_didFilterBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57afb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "remove_didFilterBeatmapLevelCollectionEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.add_didStartLoadingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*)>(&::GlobalNamespace::LevelSearchViewController::add_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57af4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "add_didStartLoadingEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.remove_didStartLoadingEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*)>(&::GlobalNamespace::LevelSearchViewController::remove_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x57afc5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "remove_didStartLoadingEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.IsFilteringPlayCounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelSearchViewController::*)()>(
    &::GlobalNamespace::LevelSearchViewController::IsFilteringPlayCounts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b015c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                               "IsFilteringPlayCounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>)>(&::GlobalNamespace::LevelSearchViewController::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b207c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.ResetFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool)>(
    &::GlobalNamespace::LevelSearchViewController::ResetFilter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x57aff44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "ResetFilter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(&::GlobalNamespace::LevelSearchViewController::Refresh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b0164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "Refresh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(::ByRef<::GlobalNamespace::LevelFilter>)>(
    &::GlobalNamespace::LevelSearchViewController::Refresh)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57b2140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::LevelFilter>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::LevelSearchViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x57b2160;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool, bool)>(
    &::GlobalNamespace::LevelSearchViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x57b2338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.ResetAllFilterSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool)>(
    &::GlobalNamespace::LevelSearchViewController::ResetAllFilterSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57b2084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "ResetAllFilterSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.ResetTextFilterSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(::StringW)>(
    &::GlobalNamespace::LevelSearchViewController::ResetTextFilterSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b2418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "ResetTextFilterSettings",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.ResetOptionFilterSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool)>(
    &::GlobalNamespace::LevelSearchViewController::ResetOptionFilterSettings)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x57b2420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "ResetOptionFilterSettings",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.RefreshAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(
    &::GlobalNamespace::LevelSearchViewController::RefreshAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x57b209c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                               "RefreshAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.SearchTextInputFieldViewOnValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(::HMUI::InputFieldView*)>(
    &::GlobalNamespace::LevelSearchViewController::SearchTextInputFieldViewOnValueChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57b24d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "SearchTextInputFieldViewOnValueChanged",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::InputFieldView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.LocalizedLevelFilterParamsDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(
    ::ByRef<::GlobalNamespace::LevelFilter>, ::GlobalNamespace::SongPackMasksModel*, ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*, bool)>(
    &::GlobalNamespace::LevelSearchViewController::LocalizedLevelFilterParamsDescription)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x57b24f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "LocalizedLevelFilterParamsDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::LevelFilter>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMasksModel*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(&::GlobalNamespace::LevelSearchViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b2bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController._DidActivate_b__30_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(
    &::GlobalNamespace::LevelSearchViewController::_DidActivate_b__30_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57b2bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                               "<DidActivate>b__30_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController._DidActivate_b__30_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(
    &::GlobalNamespace::LevelSearchViewController::_DidActivate_b__30_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57b2c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                               "<DidActivate>b__30_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController._LocalizedLevelFilterParamsDescription_g__Append_37_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW)>(
    &::GlobalNamespace::LevelSearchViewController::_LocalizedLevelFilterParamsDescription_g__Append_37_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57b2b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                 "<LocalizedLevelFilterParamsDescription>g__Append|37_0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__searchButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__searchButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchButton;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__searchButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____searchButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__clearFiltersButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearFiltersButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__clearFiltersButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearFiltersButton;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__clearFiltersButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearFiltersButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__filterParamsText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterParamsText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__filterParamsText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterParamsText;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__filterParamsText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filterParamsText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__filterPlaceholder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterPlaceholder;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__filterPlaceholder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filterPlaceholder;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__filterPlaceholder(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filterPlaceholder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::InputFieldView>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__searchTextInputFieldView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchTextInputFieldView;
}
constexpr ::UnityW<::HMUI::InputFieldView> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__searchTextInputFieldView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____searchTextInputFieldView;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__searchTextInputFieldView(::UnityW<::HMUI::InputFieldView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____searchTextInputFieldView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPackMasksModel*& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::GlobalNamespace::SongPackMasksModel* const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMasksModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IEntitlementModel*& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__entitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr ::GlobalNamespace::IEntitlementModel* const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__entitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlementModel;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entitlementModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::UIKeyboardManager>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__uiKeyboardManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiKeyboardManager;
}
constexpr ::UnityW<::GlobalNamespace::UIKeyboardManager> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__uiKeyboardManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiKeyboardManager;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__uiKeyboardManager(::UnityW<::GlobalNamespace::UIKeyboardManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uiKeyboardManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*&
GlobalNamespace::LevelSearchViewController::__cordl_internal_get_didPressSearchButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressSearchButtonEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* const&
GlobalNamespace::LevelSearchViewController::__cordl_internal_get_didPressSearchButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressSearchButtonEvent;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set_didPressSearchButtonEvent(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressSearchButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*&
GlobalNamespace::LevelSearchViewController::__cordl_internal_get_didFilterBeatmapLevelCollectionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFilterBeatmapLevelCollectionEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* const&
GlobalNamespace::LevelSearchViewController::__cordl_internal_get_didFilterBeatmapLevelCollectionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFilterBeatmapLevelCollectionEvent;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set_didFilterBeatmapLevelCollectionEvent(
    ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFilterBeatmapLevelCollectionEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*& GlobalNamespace::LevelSearchViewController::__cordl_internal_get_didStartLoadingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartLoadingEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get_didStartLoadingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didStartLoadingEvent;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didStartLoadingEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelPack*& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPack;
}
constexpr ::GlobalNamespace::BeatmapLevelPack* const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPack;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__preferredBeatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredBeatmapCharacteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__preferredBeatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredBeatmapCharacteristic;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__preferredBeatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preferredBeatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__preferredBeatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredBeatmapDifficulty;
}
constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__preferredBeatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredBeatmapDifficulty;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__preferredBeatmapDifficulty(::System::Nullable_1<::GlobalNamespace::BeatmapDifficulty> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preferredBeatmapDifficulty = value;
}
constexpr ::GlobalNamespace::LevelFilter& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__currentSearchFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSearchFilter;
}
constexpr ::GlobalNamespace::LevelFilter const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__currentSearchFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSearchFilter;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__currentSearchFilter(::GlobalNamespace::LevelFilter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSearchFilter = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__beatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> const&
GlobalNamespace::LevelSearchViewController::__cordl_internal_get__beatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr void
GlobalNamespace::LevelSearchViewController::__cordl_internal_set__beatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
GlobalNamespace::LevelSearchViewController::add_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "add_didPressSearchButtonEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LevelSearchViewController::remove_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "remove_didPressSearchButtonEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LevelSearchViewController::add_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "add_didFilterBeatmapLevelCollectionEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LevelSearchViewController::remove_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "remove_didFilterBeatmapLevelCollectionEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelSearchViewController::add_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "add_didStartLoadingEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelSearchViewController::remove_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "remove_didStartLoadingEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LevelSearchViewController::IsFilteringPlayCounts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                             "IsFilteringPlayCounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::Setup(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> beatmapLevelPacks) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelPacks);
}
inline void GlobalNamespace::LevelSearchViewController::ResetFilter(bool onlyFavorites) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "ResetFilter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onlyFavorites);
}
inline void GlobalNamespace::LevelSearchViewController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "Refresh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::Refresh(::ByRef<::GlobalNamespace::LevelFilter> filter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "Refresh", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::LevelFilter>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filter);
}
inline void GlobalNamespace::LevelSearchViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelSearchViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelSearchViewController::ResetAllFilterSettings(bool onlyFavorites) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "ResetAllFilterSettings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onlyFavorites);
}
inline void GlobalNamespace::LevelSearchViewController::ResetTextFilterSettings(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "ResetTextFilterSettings",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, text);
}
inline void GlobalNamespace::LevelSearchViewController::ResetOptionFilterSettings(bool onlyFavorites) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "ResetOptionFilterSettings",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onlyFavorites);
}
inline void GlobalNamespace::LevelSearchViewController::RefreshAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                             "RefreshAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::SearchTextInputFieldViewOnValueChanged(::HMUI::InputFieldView* inputFieldView) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "SearchTextInputFieldViewOnValueChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::InputFieldView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inputFieldView);
}
inline ::StringW GlobalNamespace::LevelSearchViewController::LocalizedLevelFilterParamsDescription(
    ::ByRef<::GlobalNamespace::LevelFilter> filter, ::GlobalNamespace::SongPackMasksModel* songPackMasksModel,
    ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* characteristics, bool isPlayerSensitivityForced) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), "LocalizedLevelFilterParamsDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::LevelFilter>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMasksModel*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, filter, songPackMasksModel, characteristics, isPlayerSensitivityForced);
}
inline void GlobalNamespace::LevelSearchViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::_DidActivate_b__30_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                             "<DidActivate>b__30_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::_DidActivate_b__30_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                                                             "<DidActivate>b__30_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::_LocalizedLevelFilterParamsDescription_g__Append_37_0(::System::Text::StringBuilder* sb, ::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelSearchViewController*>::get(),
                                               "<LocalizedLevelFilterParamsDescription>g__Append|37_0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, value);
}
inline ::GlobalNamespace::LevelSearchViewController* GlobalNamespace::LevelSearchViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelSearchViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelSearchViewController::LevelSearchViewController() {}
