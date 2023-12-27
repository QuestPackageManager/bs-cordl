#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelDetailViewController_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItemsList_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierInfoListItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ca080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0._RefreshContent_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::*)(
    int32_t, ::GlobalNamespace::ObjectiveListItem*)>(&::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::_RefreshContent_b__0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x22ca0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0*>::get(),
                                                 "<RefreshContent>b__0", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectiveListItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0._RefreshContent_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::*)(
    int32_t, ::GlobalNamespace::GameplayModifierInfoListItem*)>(&::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::_RefreshContent_b__1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22ca2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0*>::get(),
                                                 "<RefreshContent>b__1", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>&
GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::__get_missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const&
GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::__get_missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___missionObjectives;
}
constexpr void GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::__set_missionObjectives(
    ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionObjectives)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*&
GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::__get_modifierParamsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___modifierParamsList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*> const&
GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::__get_modifierParamsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___modifierParamsList;
}
constexpr void
GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::__set_modifierParamsList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modifierParamsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0* GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0*>());
}
inline void GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::_RefreshContent_b__0(int32_t idx, ::GlobalNamespace::ObjectiveListItem* objectiveListItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0*>::get(), "<RefreshContent>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectiveListItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, objectiveListItem);
}
inline void GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::_RefreshContent_b__1(int32_t idx,
                                                                                                             ::GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0*>::get(), "<RefreshContent>b__1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, gameplayModifierInfoListItem);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionLevelDetailViewController____c__DisplayClass14_0::__MissionLevelDetailViewController____c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.add_didPressPlayButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(
    ::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*)>(&::GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c9c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "add_didPressPlayButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.remove_didPressPlayButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(
    ::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*)>(&::GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22c9d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "remove_didPressPlayButtonEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.get_missionNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MissionNode* (::GlobalNamespace::MissionLevelDetailViewController::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController::get_missionNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22c9db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                               "get_missionNode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(::GlobalNamespace::MissionNode*)>(
    &::GlobalNamespace::MissionLevelDetailViewController::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22c9dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MissionLevelDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22c9fd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.RefreshContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController::RefreshContent)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x22c9de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                               "RefreshContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.PlayButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22ca088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                               "PlayButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22ca0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifiersModelSO*& GlobalNamespace::MissionLevelDetailViewController::__get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& GlobalNamespace::MissionLevelDetailViewController::__get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiersModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Button*& GlobalNamespace::MissionLevelDetailViewController::__get__playButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playButton;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& GlobalNamespace::MissionLevelDetailViewController::__get__playButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playButton;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__set__playButton(::UnityEngine::UI::Button* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelBar*& GlobalNamespace::MissionLevelDetailViewController::__get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelBar;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> const& GlobalNamespace::MissionLevelDetailViewController::__get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__set__levelBar(::GlobalNamespace::LevelBar* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObjectiveListItemsList*& GlobalNamespace::MissionLevelDetailViewController::__get__objectiveListItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____objectiveListItems;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObjectiveListItemsList*> const& GlobalNamespace::MissionLevelDetailViewController::__get__objectiveListItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____objectiveListItems;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__set__objectiveListItems(::GlobalNamespace::ObjectiveListItemsList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectiveListItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList*& GlobalNamespace::MissionLevelDetailViewController::__get__gameplayModifierInfoListItemsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayModifierInfoListItemsList;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifierInfoListItemsList*> const&
GlobalNamespace::MissionLevelDetailViewController::__get__gameplayModifierInfoListItemsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameplayModifierInfoListItemsList;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__set__gameplayModifierInfoListItemsList(::GlobalNamespace::GameplayModifierInfoListItemsList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifierInfoListItemsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::MissionLevelDetailViewController::__get__modifiersPanelGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____modifiersPanelGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::MissionLevelDetailViewController::__get__modifiersPanelGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____modifiersPanelGO;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__set__modifiersPanelGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____modifiersPanelGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*& GlobalNamespace::MissionLevelDetailViewController::__get_didPressPlayButtonEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didPressPlayButtonEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*> const&
GlobalNamespace::MissionLevelDetailViewController::__get_didPressPlayButtonEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didPressPlayButtonEvent;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__set_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressPlayButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionNode*& GlobalNamespace::MissionLevelDetailViewController::__get__missionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionNode;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> const& GlobalNamespace::MissionLevelDetailViewController::__get__missionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____missionNode;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController::__set__missionNode(::GlobalNamespace::MissionNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "add_didPressPlayButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent(::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "remove_didPressPlayButtonEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MissionLevelDetailViewController*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MissionNode* GlobalNamespace::MissionLevelDetailViewController::get_missionNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                             "get_missionNode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MissionNode*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController::Setup(::GlobalNamespace::MissionNode* missionNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionNode);
}
inline void GlobalNamespace::MissionLevelDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionLevelDetailViewController::RefreshContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                             "RefreshContent", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                             "PlayButtonPressed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelDetailViewController* GlobalNamespace::MissionLevelDetailViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionLevelDetailViewController*>());
}
inline void GlobalNamespace::MissionLevelDetailViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelDetailViewController::MissionLevelDetailViewController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
