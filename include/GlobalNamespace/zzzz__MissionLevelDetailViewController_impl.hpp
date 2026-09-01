#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionLevelDetailViewController.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_impl.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItem_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItemsList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595e3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0._RefreshContent_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::*)(int32_t, ::GlobalNamespace::ObjectiveListItem*)>(
    &::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::_RefreshContent_b__0)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x595e420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0*>(),
                                                             { "<RefreshContent>b__0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ObjectiveListItem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0._RefreshContent_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::*)(int32_t, ::GlobalNamespace::GameplayModifierInfoListItem*)>(
    &::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::_RefreshContent_b__1)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x595e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0*>(),
                                                             { "<RefreshContent>b__1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierInfoListItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*>& GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::__cordl_internal_get_missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*> const& GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::__cordl_internal_get_missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::__cordl_internal_set_missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missionObjectives = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*&
GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::__cordl_internal_get_modifierParamsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifierParamsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* const&
GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::__cordl_internal_get_modifierParamsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifierParamsList;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::__cordl_internal_set_modifierParamsList(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifierParamsList = value;
}
inline void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::_RefreshContent_b__0(int32_t idx, ::GlobalNamespace::ObjectiveListItem* objectiveListItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0*>(),
                                                           { "<RefreshContent>b__0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ObjectiveListItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, objectiveListItem);
}
inline void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::_RefreshContent_b__1(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0*>(),
                                                           { "<RefreshContent>b__1", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierInfoListItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, gameplayModifierInfoListItem);
}
inline ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0* GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass15_0::MissionLevelDetailViewController___c__DisplayClass15_0() {}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.add_didPressPlayButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*)>(&::GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595df28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(),
                                                { "add_didPressPlayButtonEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.remove_didPressPlayButtonEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*)>(&::GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x595dfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(),
                                                { "remove_didPressPlayButtonEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.get_missionNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionNode> (::GlobalNamespace::MissionLevelDetailViewController::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController::get_missionNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x595e0a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { "get_missionNode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(::GlobalNamespace::MissionNode*)>(
    &::GlobalNamespace::MissionLevelDetailViewController::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x595e0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MissionLevelDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x595e340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.RefreshContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(&::GlobalNamespace::MissionLevelDetailViewController::RefreshContent)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x595e0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { "RefreshContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.PlayButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(&::GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x595e3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { "PlayButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(&::GlobalNamespace::MissionLevelDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x595e41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModel = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__playButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__playButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playButton;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_set__playButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playButton = value;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar>& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar> const& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelBar = value;
}
constexpr ::UnityW<::GlobalNamespace::ObjectiveListItemsList>& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__objectiveListItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveListItems;
}
constexpr ::UnityW<::GlobalNamespace::ObjectiveListItemsList> const& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__objectiveListItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objectiveListItems;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_set__objectiveListItems(::UnityW<::GlobalNamespace::ObjectiveListItemsList> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objectiveListItems = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList>& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__gameplayModifierInfoListItemsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifierInfoListItemsList;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> const& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__gameplayModifierInfoListItemsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifierInfoListItemsList;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_set__gameplayModifierInfoListItemsList(::UnityW<::GlobalNamespace::GameplayModifierInfoListItemsList> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifierInfoListItemsList = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__modifiersPanelGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersPanelGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__modifiersPanelGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiersPanelGO;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_set__modifiersPanelGO(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiersPanelGO = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get_didPressPlayButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPlayButtonEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* const&
GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get_didPressPlayButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressPlayButtonEvent;
}
constexpr void
GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_set_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPressPlayButtonEvent = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode>& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__missionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNode;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode> const& GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_get__missionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNode;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__cordl_internal_set__missionNode(::UnityW<::GlobalNamespace::MissionNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionNode = value;
}
inline void GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(),
                                              { "add_didPressPlayButtonEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(),
                                              { "remove_didPressPlayButtonEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::MissionNode> GlobalNamespace::MissionLevelDetailViewController::get_missionNode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { "get_missionNode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNode>>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController::Setup(::GlobalNamespace::MissionNode* missionNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { "Setup", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionNode);
}
inline void GlobalNamespace::MissionLevelDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionLevelDetailViewController::RefreshContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { "RefreshContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { "PlayButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelDetailViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelDetailViewController* GlobalNamespace::MissionLevelDetailViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelDetailViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelDetailViewController::MissionLevelDetailViewController() {}
