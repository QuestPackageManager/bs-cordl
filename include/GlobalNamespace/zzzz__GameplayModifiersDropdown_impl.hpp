#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifiersDropdown.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersDropdown_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersDropdown_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersDropdown___c::*)()>(&::GlobalNamespace::GameplayModifiersDropdown___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593e200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown___c._Start_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameplayModifiersDropdown___c::*)(::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*)>(
    &::GlobalNamespace::GameplayModifiersDropdown___c::_Start_b__10_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x593e204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown___c*>(),
                                                             { "<Start>b__10_0", {}, { ::i2c::type_of<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayModifiersDropdown___c::setStaticF___9(::GlobalNamespace::GameplayModifiersDropdown___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::GameplayModifiersDropdown___c*, "<>9", ::GlobalNamespace::GameplayModifiersDropdown___c*>(
      std::forward<::GlobalNamespace::GameplayModifiersDropdown___c*>(value));
}
inline ::GlobalNamespace::GameplayModifiersDropdown___c* GlobalNamespace::GameplayModifiersDropdown___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::GameplayModifiersDropdown___c*, "<>9", ::GlobalNamespace::GameplayModifiersDropdown___c*>();
}
inline void GlobalNamespace::GameplayModifiersDropdown___c::setStaticF___9__10_0(::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>*, "<>9__10_0",
                                    ::GlobalNamespace::GameplayModifiersDropdown___c*>(
      std::forward<::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>* GlobalNamespace::GameplayModifiersDropdown___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*, ::StringW>*, "<>9__10_0",
                                           ::GlobalNamespace::GameplayModifiersDropdown___c*>();
}
inline void GlobalNamespace::GameplayModifiersDropdown___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GameplayModifiersDropdown___c::_Start_b__10_0(::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown___c*>(),
                                                           { "<Start>b__10_0", {}, { ::i2c::type_of<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::GameplayModifiersDropdown___c* GlobalNamespace::GameplayModifiersDropdown___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifiersDropdown___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiersDropdown___c::GameplayModifiersDropdown___c() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameplayModifiersDropdown::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593d788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                                                           { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown.remove_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::GameplayModifiersDropdown::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593d848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                                                           { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown.get_gameplayModifiersData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* (
    ::GlobalNamespace::GameplayModifiersDropdown::*)()>(&::GlobalNamespace::GameplayModifiersDropdown::get_gameplayModifiersData)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x593d908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { "get_gameplayModifiersData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersDropdown::*)()>(&::GlobalNamespace::GameplayModifiersDropdown::Start)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x593daf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersDropdown::*)()>(&::GlobalNamespace::GameplayModifiersDropdown::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x593dca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown.GetSelectedGameplayModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifierMask (::GlobalNamespace::GameplayModifiersDropdown::*)()>(
    &::GlobalNamespace::GameplayModifiersDropdown::GetSelectedGameplayModifierMask)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x593dd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { "GetSelectedGameplayModifierMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown.SelectCellWithGameplayModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersDropdown::*)(::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::GameplayModifiersDropdown::SelectCellWithGameplayModifierMask)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x593de5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                             { "SelectCellWithGameplayModifierMask", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown.GetIdxForGameplayModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameplayModifiersDropdown::*)(::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::GameplayModifiersDropdown::GetIdxForGameplayModifierMask)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x593de8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                                                           { "GetIdxForGameplayModifierMask", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown.HandleSimpleTextDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersDropdown::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::GameplayModifiersDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x593e024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                             { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayModifiersDropdown::*)()>(&::GlobalNamespace::GameplayModifiersDropdown::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593e048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayModifiersDropdown._get_gameplayModifiersData_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>* (
    ::GlobalNamespace::GameplayModifiersDropdown::*)(::GlobalNamespace::GameplayModifierMask)>(&::GlobalNamespace::GameplayModifiersDropdown::_get_gameplayModifiersData_b__9_0)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x593e04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                             { "<get_gameplayModifiersData>b__9_0", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_get__simpleTextDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_get__simpleTextDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr void GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____simpleTextDropdown = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModel = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr void GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectCellWithIdxEvent = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>*&
GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_get__gameplayModifiersData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersData;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* const&
GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_get__gameplayModifiersData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersData;
}
constexpr void GlobalNamespace::GameplayModifiersDropdown::__cordl_internal_set__gameplayModifiersData(
    ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersData = value;
}
inline void GlobalNamespace::GameplayModifiersDropdown::add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayModifiersDropdown::remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                                                         { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>*
GlobalNamespace::GameplayModifiersDropdown::get_gameplayModifiersData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { "get_gameplayModifiersData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersDropdown::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersDropdown::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifierMask GlobalNamespace::GameplayModifiersDropdown::GetSelectedGameplayModifierMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { "GetSelectedGameplayModifierMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifierMask>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayModifiersDropdown::SelectCellWithGameplayModifierMask(::GlobalNamespace::GameplayModifierMask gameplayModifierMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                                                         { "SelectCellWithGameplayModifierMask", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifierMask);
}
inline int32_t GlobalNamespace::GameplayModifiersDropdown::GetIdxForGameplayModifierMask(::GlobalNamespace::GameplayModifierMask gameplayModifierMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                                                         { "GetIdxForGameplayModifierMask", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, gameplayModifierMask);
}
inline void GlobalNamespace::GameplayModifiersDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                           { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdownWithTableView, idx);
}
inline void GlobalNamespace::GameplayModifiersDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*
GlobalNamespace::GameplayModifiersDropdown::_get_gameplayModifiersData_b__9_0(::GlobalNamespace::GameplayModifierMask value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayModifiersDropdown*>(),
                                                                                         { "<get_gameplayModifiersData>b__9_0", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask, ::StringW>*>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiersDropdown* GlobalNamespace::GameplayModifiersDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayModifiersDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiersDropdown::GameplayModifiersDropdown() {}
