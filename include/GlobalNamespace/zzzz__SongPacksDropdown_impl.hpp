#pragma once
// IWYU pragma private; include "GlobalNamespace\SongPacksDropdown.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongPacksDropdown_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__SongPacksDropdown_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown___c::*)()>(&::GlobalNamespace::SongPacksDropdown___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5940c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown___c._LazyInit_b__7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SongPacksDropdown___c::*)(::StringW)>(&::GlobalNamespace::SongPacksDropdown___c::_LazyInit_b__7_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5940c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown___c*>(), { "<LazyInit>b__7_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SongPacksDropdown___c::setStaticF___9(::GlobalNamespace::SongPacksDropdown___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::SongPacksDropdown___c*, "<>9", ::GlobalNamespace::SongPacksDropdown___c*>(std::forward<::GlobalNamespace::SongPacksDropdown___c*>(value));
}
inline ::GlobalNamespace::SongPacksDropdown___c* GlobalNamespace::SongPacksDropdown___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::SongPacksDropdown___c*, "<>9", ::GlobalNamespace::SongPacksDropdown___c*>();
}
inline void GlobalNamespace::SongPacksDropdown___c::setStaticF___9__7_0(::System::Func_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_0", ::GlobalNamespace::SongPacksDropdown___c*>(std::forward<::System::Func_2<::StringW, ::StringW>*>(value));
}
inline ::System::Func_2<::StringW, ::StringW>* GlobalNamespace::SongPacksDropdown___c::getStaticF___9__7_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::StringW>*, "<>9__7_0", ::GlobalNamespace::SongPacksDropdown___c*>();
}
inline void GlobalNamespace::SongPacksDropdown___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SongPacksDropdown___c::_LazyInit_b__7_0(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown___c*>(), { "<LazyInit>b__7_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, serializedName);
}
inline ::GlobalNamespace::SongPacksDropdown___c* GlobalNamespace::SongPacksDropdown___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongPacksDropdown___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPacksDropdown___c::SongPacksDropdown___c() {}
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::SongPacksDropdown::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59404bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.remove_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::SongPacksDropdown::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x594057c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.LazyInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)()>(&::GlobalNamespace::SongPacksDropdown::LazyInit)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x594063c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "LazyInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)()>(&::GlobalNamespace::SongPacksDropdown::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5940800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)()>(&::GlobalNamespace::SongPacksDropdown::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5940898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.SetOverrideSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::SongPacksDropdown::SetOverrideSongPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5940974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(),
                                                                                           { "SetOverrideSongPacks", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.GetSelectedSongPackMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SongPackMask (::GlobalNamespace::SongPacksDropdown::*)()>(&::GlobalNamespace::SongPacksDropdown::GetSelectedSongPackMask)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x594097c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "GetSelectedSongPackMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.SelectCellWithSongPackMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::SongPacksDropdown::SelectCellWithSongPackMask)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5940a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "SelectCellWithSongPackMask", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.GetIdxForSongPackMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SongPacksDropdown::*)(::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::SongPacksDropdown::GetIdxForSongPackMask)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5940ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "GetIdxForSongPackMask", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown.HandleSimpleTextDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::SongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5940bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(),
                                                             { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPacksDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SongPacksDropdown::*)()>(&::GlobalNamespace::SongPacksDropdown::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5940bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__simpleTextDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__simpleTextDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____simpleTextDropdown = value;
}
constexpr ::GlobalNamespace::SongPackMasksModel*& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::GlobalNamespace::SongPackMasksModel* const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPackMasksModel = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::SongPacksDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectCellWithIdxEvent = value;
}
constexpr bool& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__songPackSerializedNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::SongPacksDropdown::__cordl_internal_get__songPackSerializedNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackSerializedNames;
}
constexpr void GlobalNamespace::SongPacksDropdown::__cordl_internal_set__songPackSerializedNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPackSerializedNames = value;
}
inline void GlobalNamespace::SongPacksDropdown::add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongPacksDropdown::remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SongPacksDropdown::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "LazyInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPacksDropdown::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPacksDropdown::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SongPacksDropdown::SetOverrideSongPacks(::System::Collections::Generic::List_1<::StringW>* songPackSerializedNames) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(),
                                                                                         { "SetOverrideSongPacks", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songPackSerializedNames);
}
inline ::GlobalNamespace::SongPackMask GlobalNamespace::SongPacksDropdown::GetSelectedSongPackMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "GetSelectedSongPackMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SongPackMask>(this, ___internal_method);
}
inline void GlobalNamespace::SongPacksDropdown::SelectCellWithSongPackMask(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "SelectCellWithSongPackMask", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songPackMask);
}
inline int32_t GlobalNamespace::SongPacksDropdown::GetIdxForSongPackMask(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { "GetIdxForSongPackMask", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, songPackMask);
}
inline void GlobalNamespace::SongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(),
                                                           { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdownWithTableView, idx);
}
inline void GlobalNamespace::SongPacksDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SongPacksDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SongPacksDropdown* GlobalNamespace::SongPacksDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SongPacksDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SongPacksDropdown::SongPacksDropdown() {}
