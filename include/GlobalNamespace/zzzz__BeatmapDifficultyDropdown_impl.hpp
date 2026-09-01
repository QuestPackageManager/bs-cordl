#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapDifficultyDropdown.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyDropdown_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyDropdown_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultyDropdown___c::*)()>(&::GlobalNamespace::BeatmapDifficultyDropdown___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593f9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown___c._Start_b__12_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapDifficultyDropdown___c::*)(::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*)>(
    &::GlobalNamespace::BeatmapDifficultyDropdown___c::_Start_b__12_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x593f9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown___c*>(),
                                                             { "<Start>b__12_0", {}, { ::i2c::type_of<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapDifficultyDropdown___c::setStaticF___9(::GlobalNamespace::BeatmapDifficultyDropdown___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::BeatmapDifficultyDropdown___c*, "<>9", ::GlobalNamespace::BeatmapDifficultyDropdown___c*>(
      std::forward<::GlobalNamespace::BeatmapDifficultyDropdown___c*>(value));
}
inline ::GlobalNamespace::BeatmapDifficultyDropdown___c* GlobalNamespace::BeatmapDifficultyDropdown___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::BeatmapDifficultyDropdown___c*, "<>9", ::GlobalNamespace::BeatmapDifficultyDropdown___c*>();
}
inline void GlobalNamespace::BeatmapDifficultyDropdown___c::setStaticF___9__12_0(::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*, ::StringW>*, "<>9__12_0",
                                    ::GlobalNamespace::BeatmapDifficultyDropdown___c*>(
      std::forward<::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*, ::StringW>*>(value));
}
inline ::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*, ::StringW>* GlobalNamespace::BeatmapDifficultyDropdown___c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*, ::StringW>*, "<>9__12_0",
                                           ::GlobalNamespace::BeatmapDifficultyDropdown___c*>();
}
inline void GlobalNamespace::BeatmapDifficultyDropdown___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapDifficultyDropdown___c::_Start_b__12_0(::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown___c*>(),
                                                           { "<Start>b__12_0", {}, { ::i2c::type_of<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::GlobalNamespace::BeatmapDifficultyDropdown___c* GlobalNamespace::BeatmapDifficultyDropdown___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDifficultyDropdown___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficultyDropdown___c::BeatmapDifficultyDropdown___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultyDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::BeatmapDifficultyDropdown::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593f1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(),
                                                                                           { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.remove_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultyDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::BeatmapDifficultyDropdown::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593f2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(),
                                                                                           { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.get_beatmapDifficultyData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*>* (
    ::GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&::GlobalNamespace::BeatmapDifficultyDropdown::get_beatmapDifficultyData)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x593f360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "get_beatmapDifficultyData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.get_includeAllDifficulties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&::GlobalNamespace::BeatmapDifficultyDropdown::get_includeAllDifficulties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593f540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "get_includeAllDifficulties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.set_includeAllDifficulties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultyDropdown::*)(bool)>(&::GlobalNamespace::BeatmapDifficultyDropdown::set_includeAllDifficulties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593f548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "set_includeAllDifficulties", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&::GlobalNamespace::BeatmapDifficultyDropdown::Start)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x593f550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&::GlobalNamespace::BeatmapDifficultyDropdown::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x593f704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.GetSelectedBeatmapDifficultyMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficultyMask (::GlobalNamespace::BeatmapDifficultyDropdown::*)()>(
    &::GlobalNamespace::BeatmapDifficultyDropdown::GetSelectedBeatmapDifficultyMask)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x593f7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "GetSelectedBeatmapDifficultyMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.SelectCellWithBeatmapDifficultyMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultyDropdown::*)(::GlobalNamespace::BeatmapDifficultyMask)>(
    &::GlobalNamespace::BeatmapDifficultyDropdown::SelectCellWithBeatmapDifficultyMask)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x593f8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(),
                                                             { "SelectCellWithBeatmapDifficultyMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.GetIdxForBeatmapDifficultyMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapDifficultyDropdown::*)(::GlobalNamespace::BeatmapDifficultyMask)>(
    &::GlobalNamespace::BeatmapDifficultyDropdown::GetIdxForBeatmapDifficultyMask)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x593f8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(),
                                                                                           { "GetIdxForBeatmapDifficultyMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown.HandleSimpleTextDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultyDropdown::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::BeatmapDifficultyDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x593f928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(),
                                                             { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapDifficultyDropdown::*)()>(&::GlobalNamespace::BeatmapDifficultyDropdown::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593f94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_get__simpleTextDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_get__simpleTextDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr void GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____simpleTextDropdown = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr void GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectCellWithIdxEvent = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*>*&
GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_get__beatmapDifficultyData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultyData;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*>* const&
GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_get__beatmapDifficultyData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficultyData;
}
constexpr void GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_set__beatmapDifficultyData(
    ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDifficultyData = value;
}
constexpr bool& GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_get__includeAllDifficulties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____includeAllDifficulties_k__BackingField;
}
constexpr bool const& GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_get__includeAllDifficulties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____includeAllDifficulties_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapDifficultyDropdown::__cordl_internal_set__includeAllDifficulties_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____includeAllDifficulties_k__BackingField = value;
}
inline void GlobalNamespace::BeatmapDifficultyDropdown::add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapDifficultyDropdown::remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(),
                                                                                         { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*>*
GlobalNamespace::BeatmapDifficultyDropdown::get_beatmapDifficultyData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "get_beatmapDifficultyData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask, ::StringW>*>*>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapDifficultyDropdown::get_includeAllDifficulties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "get_includeAllDifficulties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDifficultyDropdown::set_includeAllDifficulties(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "set_includeAllDifficulties", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapDifficultyDropdown::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDifficultyDropdown::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::BeatmapDifficultyDropdown::GetSelectedBeatmapDifficultyMask() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { "GetSelectedBeatmapDifficultyMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficultyMask>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapDifficultyDropdown::SelectCellWithBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(),
                                                           { "SelectCellWithBeatmapDifficultyMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapDifficultyMask);
}
inline int32_t GlobalNamespace::BeatmapDifficultyDropdown::GetIdxForBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(),
                                                                                         { "GetIdxForBeatmapDifficultyMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficultyMask>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, beatmapDifficultyMask);
}
inline void GlobalNamespace::BeatmapDifficultyDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(),
                                                           { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdownWithTableView, idx);
}
inline void GlobalNamespace::BeatmapDifficultyDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapDifficultyDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficultyDropdown* GlobalNamespace::BeatmapDifficultyDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapDifficultyDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficultyDropdown::BeatmapDifficultyDropdown() {}
