#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelDetailViewController.hpp"
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
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItem_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItemsList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c1d51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0._RefreshContent_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::*)(
    int32_t, ::GlobalNamespace::ObjectiveListItem*)>(&::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::_RefreshContent_b__0)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3c1d554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0*>::get(),
                                                 "<RefreshContent>b__0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectiveListItem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0._RefreshContent_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::*)(
    int32_t, ::GlobalNamespace::GameplayModifierInfoListItem*)>(&::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::_RefreshContent_b__1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3c1d72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0*>::get(), "<RefreshContent>b__1",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*>&
GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::__cordl_internal_get_missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> const&
GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::__cordl_internal_get_missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectives;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::__cordl_internal_set_missionObjectives(
    ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionObjectives)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>*&
GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::__cordl_internal_get_modifierParamsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifierParamsList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* const&
GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::__cordl_internal_get_modifierParamsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifierParamsList;
}
constexpr void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::__cordl_internal_set_modifierParamsList(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameplayModifierParamsSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modifierParamsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::_RefreshContent_b__0(int32_t idx, ::GlobalNamespace::ObjectiveListItem* objectiveListItem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0*>::get(),
                                               "<RefreshContent>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObjectiveListItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, objectiveListItem);
}
inline void GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::_RefreshContent_b__1(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0*>::get(),
                                               "<RefreshContent>b__1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifierInfoListItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, gameplayModifierInfoListItem);
}
inline ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0* GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelDetailViewController___c__DisplayClass14_0::MissionLevelDetailViewController___c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.add_didPressPlayButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*)>(&::GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c1d0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "add_didPressPlayButtonEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.remove_didPressPlayButtonEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(
    ::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*)>(&::GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c1d174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "remove_didPressPlayButtonEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.get_missionNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::MissionNode> (::GlobalNamespace::MissionLevelDetailViewController::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController::get_missionNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c1d224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                               "get_missionNode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(::GlobalNamespace::MissionNode*)>(
    &::GlobalNamespace::MissionLevelDetailViewController::Setup)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3c1d22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)(bool, bool, bool)>(
    &::GlobalNamespace::MissionLevelDetailViewController::DidActivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3c1d474;

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
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3c1d258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                               "RefreshContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController.PlayButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3c1d524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                               "PlayButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelDetailViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelDetailViewController::*)()>(
    &::GlobalNamespace::MissionLevelDetailViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c1d54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiersModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelBar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objectiveListItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifierInfoListItemsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____modifiersPanelGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didPressPlayButtonEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionLevelDetailViewController::add_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "add_didPressPlayButtonEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelDetailViewController::remove_didPressPlayButtonEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "remove_didPressPlayButtonEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::GlobalNamespace::MissionLevelDetailViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::MissionNode> GlobalNamespace::MissionLevelDetailViewController::get_missionNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                             "get_missionNode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionNode>, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController::Setup(::GlobalNamespace::MissionNode* missionNode) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), "Setup", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionNode);
}
inline void GlobalNamespace::MissionLevelDetailViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MissionLevelDetailViewController::RefreshContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                             "RefreshContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController::PlayButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                             "PlayButtonPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelDetailViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelDetailViewController*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelDetailViewController* GlobalNamespace::MissionLevelDetailViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionLevelDetailViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelDetailViewController::MissionLevelDetailViewController() {}
