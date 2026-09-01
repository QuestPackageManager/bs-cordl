#pragma once
// IWYU pragma private; include "GlobalNamespace\LocalLeaderboardViewController.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardTableView_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "HMUI/zzzz__IconSegmentedControl_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::*)()>(
    &::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x594a5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x594a8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::GlobalNamespace::LocalLeaderboardViewController>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LocalLeaderboardViewController> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27::LocalLeaderboardViewController__ClearLeaderboardsAsync_d__27() {}
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.get_leaderboardsModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LocalLeaderboardsModel* (::GlobalNamespace::LocalLeaderboardViewController::*)()>(
    &::GlobalNamespace::LocalLeaderboardViewController::get_leaderboardsModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5949a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "get_leaderboardsModel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)()>(&::GlobalNamespace::LocalLeaderboardViewController::OnDisable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5949a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)(bool)>(&::GlobalNamespace::LocalLeaderboardViewController::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5949ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "Setup", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::LocalLeaderboardViewController::SetData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5949ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::LocalLeaderboardViewController::DidActivate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5949bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)(bool, bool)>(&::GlobalNamespace::LocalLeaderboardViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x594a1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)()>(&::GlobalNamespace::LocalLeaderboardViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x594a2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.RefreshScopeSegmentedControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)()>(
    &::GlobalNamespace::LocalLeaderboardViewController::RefreshScopeSegmentedControl)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5949db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "RefreshScopeSegmentedControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.HandleScopeSegmentedControlDidSelectCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)(::HMUI::SegmentedControl*, int32_t)>(
    &::GlobalNamespace::LocalLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x594a07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(),
                                                             { "HandleScopeSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.ClearLeaderboardsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LocalLeaderboardViewController::*)()>(
    &::GlobalNamespace::LocalLeaderboardViewController::ClearLeaderboardsAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x594a378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "ClearLeaderboardsAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.SetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType)>(
    &::GlobalNamespace::LocalLeaderboardViewController::SetContent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x594a428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(),
                                                             { "SetContent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.HandleNewScoreWasAddedToLeaderboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)(::StringW, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType)>(
    &::GlobalNamespace::LocalLeaderboardViewController::HandleNewScoreWasAddedToLeaderboard)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x594a4a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(),
                                         { "HandleNewScoreWasAddedToLeaderboard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)()>(&::GlobalNamespace::LocalLeaderboardViewController::Refresh)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5949b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)()>(&::GlobalNamespace::LocalLeaderboardViewController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x594a54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardViewController._DidActivate_b__22_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardViewController::*)()>(&::GlobalNamespace::LocalLeaderboardViewController::_DidActivate_b__22_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x594a558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "<DidActivate>b__22_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__maxNumberOfCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfCells;
}
constexpr int32_t const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__maxNumberOfCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberOfCells;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__maxNumberOfCells(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxNumberOfCells = value;
}
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardTableView>& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__leaderboardTableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardTableView;
}
constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardTableView> const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__leaderboardTableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardTableView;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__leaderboardTableView(::UnityW<::GlobalNamespace::LocalLeaderboardTableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardTableView = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__clearLeaderboardsWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearLeaderboardsWrapper;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__clearLeaderboardsWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearLeaderboardsWrapper;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__clearLeaderboardsWrapper(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearLeaderboardsWrapper = value;
}
constexpr ::UnityW<::HMUI::NoTransitionsButton>& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__clearLeaderboardsButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearLeaderboardsButton;
}
constexpr ::UnityW<::HMUI::NoTransitionsButton> const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__clearLeaderboardsButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearLeaderboardsButton;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__clearLeaderboardsButton(::UnityW<::HMUI::NoTransitionsButton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearLeaderboardsButton = value;
}
constexpr ::UnityW<::HMUI::IconSegmentedControl>& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__scopeSegmentedControl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scopeSegmentedControl;
}
constexpr ::UnityW<::HMUI::IconSegmentedControl> const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__scopeSegmentedControl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scopeSegmentedControl;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__scopeSegmentedControl(::UnityW<::HMUI::IconSegmentedControl> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scopeSegmentedControl = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__allTimeLeaderboardIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allTimeLeaderboardIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__allTimeLeaderboardIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allTimeLeaderboardIcon;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__allTimeLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allTimeLeaderboardIcon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__todayLeaderboardIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____todayLeaderboardIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__todayLeaderboardIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____todayLeaderboardIcon;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__todayLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____todayLeaderboardIcon = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__clearLeaderboardIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearLeaderboardIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__clearLeaderboardIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearLeaderboardIcon;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__clearLeaderboardIcon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearLeaderboardIcon = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::LocalLeaderboardsModel*& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__localLeaderboardsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardsModel;
}
constexpr ::GlobalNamespace::LocalLeaderboardsModel* const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__localLeaderboardsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localLeaderboardsModel;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__localLeaderboardsModel(::GlobalNamespace::LocalLeaderboardsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localLeaderboardsModel = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey = value;
}
constexpr bool& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__refreshIsNeeded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshIsNeeded;
}
constexpr bool const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__refreshIsNeeded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshIsNeeded;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__refreshIsNeeded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshIsNeeded = value;
}
constexpr bool& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__enableClear() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableClear;
}
constexpr bool const& GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_get__enableClear() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableClear;
}
constexpr void GlobalNamespace::LocalLeaderboardViewController::__cordl_internal_set__enableClear(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableClear = value;
}
inline void GlobalNamespace::LocalLeaderboardViewController::setStaticF__leaderboardType(::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, "_leaderboardType", ::GlobalNamespace::LocalLeaderboardViewController*>(
      std::forward<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>(value));
}
inline ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType GlobalNamespace::LocalLeaderboardViewController::getStaticF__leaderboardType() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType, "_leaderboardType", ::GlobalNamespace::LocalLeaderboardViewController*>();
}
inline ::GlobalNamespace::LocalLeaderboardsModel* GlobalNamespace::LocalLeaderboardViewController::get_leaderboardsModel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "get_leaderboardsModel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalLeaderboardsModel*>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardViewController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardViewController::Setup(bool enableClear) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "Setup", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enableClear);
}
inline void GlobalNamespace::LocalLeaderboardViewController::SetData(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::LocalLeaderboardViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::LocalLeaderboardViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::LocalLeaderboardViewController::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardViewController::RefreshScopeSegmentedControl() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "RefreshScopeSegmentedControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardViewController::HandleScopeSegmentedControlDidSelectCell(::HMUI::SegmentedControl* segmentedControl, int32_t cellNumber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(),
                                                           { "HandleScopeSegmentedControlDidSelectCell", {}, { ::i2c::type_of<::HMUI::SegmentedControl*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segmentedControl, cellNumber);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LocalLeaderboardViewController::ClearLeaderboardsAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "ClearLeaderboardsAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardViewController::SetContent(::StringW leaderboardID, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(),
                                                           { "SetContent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leaderboardID, leaderboardType);
}
inline void GlobalNamespace::LocalLeaderboardViewController::HandleNewScoreWasAddedToLeaderboard(::StringW leaderboardID, ::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType leaderboardType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(),
                                       { "HandleNewScoreWasAddedToLeaderboard", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::LocalLeaderboardsModel_LeaderboardType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leaderboardID, leaderboardType);
}
inline void GlobalNamespace::LocalLeaderboardViewController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LocalLeaderboardViewController::_DidActivate_b__22_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardViewController*>(), { "<DidActivate>b__22_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardViewController* GlobalNamespace::LocalLeaderboardViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardViewController::LocalLeaderboardViewController() {}
