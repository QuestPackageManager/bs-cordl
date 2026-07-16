#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicsDropdown.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicsDropdown_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown___c::*)()>(&::GlobalNamespace::BeatmapCharacteristicsDropdown___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593cf14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown___c._OnEnable_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapCharacteristicsDropdown___c::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::BeatmapCharacteristicsDropdown___c::_OnEnable_b__7_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x593cf18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>(),
                                                                                           { "<OnEnable>b__7_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapCharacteristicsDropdown___c::setStaticF___9(::GlobalNamespace::BeatmapCharacteristicsDropdown___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapCharacteristicsDropdown___c*, "<>9", ::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>(
      std::forward<::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>(value));
}
inline ::GlobalNamespace::BeatmapCharacteristicsDropdown___c* GlobalNamespace::BeatmapCharacteristicsDropdown___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapCharacteristicsDropdown___c*, "<>9", ::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>();
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown___c::setStaticF___9__7_0(::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>*, "<>9__7_0", ::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>* GlobalNamespace::BeatmapCharacteristicsDropdown___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, ::StringW>*, "<>9__7_0", ::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>();
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapCharacteristicsDropdown___c::_OnEnable_b__7_0(::GlobalNamespace::BeatmapCharacteristic x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>(),
                                                                                         { "<OnEnable>b__7_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::BeatmapCharacteristicsDropdown___c* GlobalNamespace::BeatmapCharacteristicsDropdown___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicsDropdown___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicsDropdown___c::BeatmapCharacteristicsDropdown___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*)>(
    &::GlobalNamespace::BeatmapCharacteristicsDropdown::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593c704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                             { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown.remove_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*)>(
    &::GlobalNamespace::BeatmapCharacteristicsDropdown::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593c7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                             { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)()>(&::GlobalNamespace::BeatmapCharacteristicsDropdown::OnEnable)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x593c884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)()>(&::GlobalNamespace::BeatmapCharacteristicsDropdown::OnDisable)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x593ca94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown.SetNotAllowedCharacteristics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::by_ref<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>)>(
    &::GlobalNamespace::BeatmapCharacteristicsDropdown::SetNotAllowedCharacteristics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x593cb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                             { "SetNotAllowedCharacteristics", {}, { ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown.GetSelectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicsDropdown::GetSelectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x593cb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { "GetSelectedBeatmapCharacteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown.SelectCellWithBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::BeatmapCharacteristicsDropdown::SelectCellWithBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x593cbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                             { "SelectCellWithBeatmapCharacteristic", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown.SelectCellWithBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::StringW)>(
    &::GlobalNamespace::BeatmapCharacteristicsDropdown::SelectCellWithBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x593cc74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { "SelectCellWithBeatmapCharacteristic", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown.HandleSimpleTextDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::BeatmapCharacteristicsDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x593cd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                             { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsDropdown::*)()>(&::GlobalNamespace::BeatmapCharacteristicsDropdown::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x593ce1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get__simpleTextDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get__simpleTextDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____simpleTextDropdown = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicCollection = value;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*& GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* const& GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectCellWithIdxEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>*& GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get__beatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristics;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* const&
GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get__beatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristics;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_set__beatmapCharacteristics(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristics = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristic>& GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get__notAllowedCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> const& GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_get__notAllowedCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notAllowedCharacteristics;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsDropdown::__cordl_internal_set__notAllowedCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristic> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notAllowedCharacteristics = value;
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown::add_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                           { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown::remove_didSelectCellWithIdxEvent(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                           { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown::SetNotAllowedCharacteristics(::by_ref<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>> notAllowedCharacteristics) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                           { "SetNotAllowedCharacteristics", {}, { ::i2c::type_of<::by_ref<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, notAllowedCharacteristics);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristicsDropdown::GetSelectedBeatmapCharacteristic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { "GetSelectedBeatmapCharacteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown::SelectCellWithBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                           { "SelectCellWithBeatmapCharacteristic", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristic);
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown::SelectCellWithBeatmapCharacteristic(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { "SelectCellWithBeatmapCharacteristic", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializedName);
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(),
                                                           { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdownWithTableView, idx);
}
inline void GlobalNamespace::BeatmapCharacteristicsDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicsDropdown* GlobalNamespace::BeatmapCharacteristicsDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicsDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicsDropdown::BeatmapCharacteristicsDropdown() {}
