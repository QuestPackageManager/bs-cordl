#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelSearchViewController.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__LevelSearchViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::*)()>(
    &::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::MoveNext)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x5953da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5954800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LevelSearchViewController>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*>>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::LevelSearchViewController__RefreshAsync_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LevelSearchViewController> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::BeatmapLevel*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelSearchViewController__RefreshAsync_d__42::LevelSearchViewController__RefreshAsync_d__42() {}
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.add_didPressSearchButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*)>(&::GlobalNamespace::LevelSearchViewController::add_didPressSearchButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5953028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                         { "add_didPressSearchButtonEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.remove_didPressSearchButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*)>(&::GlobalNamespace::LevelSearchViewController::remove_didPressSearchButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59530e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
            { "remove_didPressSearchButtonEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.add_didFilterBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*)>(&::GlobalNamespace::LevelSearchViewController::add_didFilterBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594fe2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
            { "add_didFilterBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.remove_didFilterBeatmapLevelCollectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(
    ::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*)>(&::GlobalNamespace::LevelSearchViewController::remove_didFilterBeatmapLevelCollectionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5950660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
            { "remove_didFilterBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.add_didStartLoadingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*)>(
    &::GlobalNamespace::LevelSearchViewController::add_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594feec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                                             { "add_didStartLoadingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.remove_didStartLoadingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*)>(
    &::GlobalNamespace::LevelSearchViewController::remove_didStartLoadingEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5950720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                                { "remove_didStartLoadingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.IsFilteringPlayCounts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LevelSearchViewController::*)()>(&::GlobalNamespace::LevelSearchViewController::IsFilteringPlayCounts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5950c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "IsFilteringPlayCounts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(::ArrayW<::GlobalNamespace::BeatmapLevelPack*>)>(
    &::GlobalNamespace::LevelSearchViewController::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59531a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "Setup", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelPack*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.ResetFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool)>(&::GlobalNamespace::LevelSearchViewController::ResetFilter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5950a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "ResetFilter", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(&::GlobalNamespace::LevelSearchViewController::Refresh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5950c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(::by_ref<::GlobalNamespace::LevelFilter>)>(
    &::GlobalNamespace::LevelSearchViewController::Refresh)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x595326c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "Refresh", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool, bool, bool)>(&::GlobalNamespace::LevelSearchViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x595328c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool, bool)>(&::GlobalNamespace::LevelSearchViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5953464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.ResetAllFilterSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool)>(&::GlobalNamespace::LevelSearchViewController::ResetAllFilterSettings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59531b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "ResetAllFilterSettings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.ResetTextFilterSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(::StringW)>(&::GlobalNamespace::LevelSearchViewController::ResetTextFilterSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5953544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "ResetTextFilterSettings", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.ResetOptionFilterSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(bool)>(&::GlobalNamespace::LevelSearchViewController::ResetOptionFilterSettings)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x595354c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "ResetOptionFilterSettings", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.RefreshAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(&::GlobalNamespace::LevelSearchViewController::RefreshAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59531c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "RefreshAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.SearchTextInputFieldViewOnValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)(::HMUI::InputFieldView*)>(
    &::GlobalNamespace::LevelSearchViewController::SearchTextInputFieldViewOnValueChanged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5953604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                                                                           { "SearchTextInputFieldViewOnValueChanged", {}, { ::i2c::type_of<::HMUI::InputFieldView*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController.LocalizedLevelFilterParamsDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::GlobalNamespace::LevelFilter>, ::GlobalNamespace::SongPackMasksModel*,
                                                                     ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>*, bool)>(
    &::GlobalNamespace::LevelSearchViewController::LocalizedLevelFilterParamsDescription)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x595361c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                                { "LocalizedLevelFilterParamsDescription",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>(), ::i2c::type_of<::GlobalNamespace::SongPackMasksModel*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(&::GlobalNamespace::LevelSearchViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5953d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController._DidActivate_b__37_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(&::GlobalNamespace::LevelSearchViewController::_DidActivate_b__37_0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5953d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "<DidActivate>b__37_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController._DidActivate_b__37_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelSearchViewController::*)()>(&::GlobalNamespace::LevelSearchViewController::_DidActivate_b__37_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5953d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "<DidActivate>b__37_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelSearchViewController._LocalizedLevelFilterParamsDescription_g__Append_44_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW)>(
    &::GlobalNamespace::LevelSearchViewController::_LocalizedLevelFilterParamsDescription_g__Append_44_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5953ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                                { "<LocalizedLevelFilterParamsDescription>g__Append|44_0", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
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
  this->____searchButton = value;
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
  this->____clearFiltersButton = value;
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
  this->____filterParamsText = value;
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
  this->____filterPlaceholder = value;
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
  this->____searchTextInputFieldView = value;
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
  this->____playerDataModel = value;
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
  this->____songPackMasksModel = value;
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
  this->____entitlementModel = value;
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
  this->____beatmapCharacteristicCollection = value;
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
  this->____uiKeyboardManager = value;
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
  this->___didPressSearchButtonEvent = value;
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
  this->___didFilterBeatmapLevelCollectionEvent = value;
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
  this->___didStartLoadingEvent = value;
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
  this->____beatmapLevelPack = value;
}
constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__preferredBeatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredBeatmapCharacteristic;
}
constexpr ::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__preferredBeatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preferredBeatmapCharacteristic;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__preferredBeatmapCharacteristic(::System::Nullable_1<::GlobalNamespace::BeatmapCharacteristic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preferredBeatmapCharacteristic = value;
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
  this->____cancellationTokenSource = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*>& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__beatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*> const& GlobalNamespace::LevelSearchViewController::__cordl_internal_get__beatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr void GlobalNamespace::LevelSearchViewController::__cordl_internal_set__beatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelPacks = value;
}
inline void
GlobalNamespace::LevelSearchViewController::add_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                          { "add_didPressSearchButtonEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LevelSearchViewController::remove_didPressSearchButtonEvent(::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                       { "remove_didPressSearchButtonEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::LevelSearchViewController>, ::GlobalNamespace::LevelFilter>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LevelSearchViewController::add_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                       { "add_didFilterBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::LevelSearchViewController::remove_didFilterBeatmapLevelCollectionEvent(::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
          { "remove_didFilterBeatmapLevelCollectionEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::BeatmapLevelPack*, ::GlobalNamespace::LevelSelectionOptions>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelSearchViewController::add_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                                           { "add_didStartLoadingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LevelSearchViewController::remove_didStartLoadingEvent(::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                                           { "remove_didStartLoadingEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::LevelSearchViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LevelSearchViewController::IsFilteringPlayCounts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "IsFilteringPlayCounts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::Setup(::ArrayW<::GlobalNamespace::BeatmapLevelPack*> beatmapLevelPacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "Setup", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelPack*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPacks);
}
inline void GlobalNamespace::LevelSearchViewController::ResetFilter(bool onlyFavorites) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "ResetFilter", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onlyFavorites);
}
inline void GlobalNamespace::LevelSearchViewController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::Refresh(::by_ref<::GlobalNamespace::LevelFilter> filter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "Refresh", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline void GlobalNamespace::LevelSearchViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LevelSearchViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LevelSearchViewController::ResetAllFilterSettings(bool onlyFavorites) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "ResetAllFilterSettings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onlyFavorites);
}
inline void GlobalNamespace::LevelSearchViewController::ResetTextFilterSettings(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "ResetTextFilterSettings", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::LevelSearchViewController::ResetOptionFilterSettings(bool onlyFavorites) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "ResetOptionFilterSettings", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onlyFavorites);
}
inline void GlobalNamespace::LevelSearchViewController::RefreshAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "RefreshAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::SearchTextInputFieldViewOnValueChanged(::HMUI::InputFieldView* inputFieldView) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                                                                         { "SearchTextInputFieldViewOnValueChanged", {}, { ::i2c::type_of<::HMUI::InputFieldView*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputFieldView);
}
inline ::StringW
GlobalNamespace::LevelSearchViewController::LocalizedLevelFilterParamsDescription(::by_ref<::GlobalNamespace::LevelFilter> filter, ::GlobalNamespace::SongPackMasksModel* songPackMasksModel,
                                                                                  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* characteristics,
                                                                                  bool isPlayerSensitivityForced) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                              { "LocalizedLevelFilterParamsDescription",
                                                {},
                                                { ::i2c::type_of<::by_ref<::GlobalNamespace::LevelFilter>>(), ::i2c::type_of<::GlobalNamespace::SongPackMasksModel*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filter, songPackMasksModel, characteristics, isPlayerSensitivityForced);
}
inline void GlobalNamespace::LevelSearchViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::_DidActivate_b__37_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "<DidActivate>b__37_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::_DidActivate_b__37_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(), { "<DidActivate>b__37_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelSearchViewController::_LocalizedLevelFilterParamsDescription_g__Append_44_0(::System::Text::StringBuilder* sb, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelSearchViewController*>(),
                                              { "<LocalizedLevelFilterParamsDescription>g__Append|44_0", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, value);
}
inline ::GlobalNamespace::LevelSearchViewController* GlobalNamespace::LevelSearchViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelSearchViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelSearchViewController::LevelSearchViewController() {}
