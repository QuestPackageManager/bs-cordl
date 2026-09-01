#pragma once
// IWYU pragma private; include "GlobalNamespace\QuickPlaySongPacksDropdown.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySongPacksDropdown_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySongPacksDropdown_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5944588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_get_serializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr ::StringW const& GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_get_serializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_set_serializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializedName = value;
}
constexpr ::StringW& GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_get_localizedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr ::StringW const& GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_get_localizedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_set_localizedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localizedName = value;
}
constexpr int32_t& GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_get_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr int32_t const& GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_get_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_set_order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___order = value;
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_get_songPackMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songPackMask;
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_get_songPackMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songPackMask;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::__cordl_internal_set_songPackMask(::GlobalNamespace::SongPackMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songPackMask = value;
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::QuickPlaySongPacksDropdown_SongPackMaskItem() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown___c::*)()>(&::GlobalNamespace::QuickPlaySongPacksDropdown___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5944698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c._LazyInit_b__15_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* (
    ::GlobalNamespace::QuickPlaySongPacksDropdown___c::*)(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_2)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x594469c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(),
                                                { "<LazyInit>b__15_2", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c._LazyInit_b__15_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::QuickPlaySongPacksDropdown___c::*)(
    ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*)>(&::GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5944854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(),
                                                { "<LazyInit>b__15_4", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c._LazyInit_b__15_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::QuickPlaySongPacksDropdown___c::*)(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_3)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5944898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(),
                                                             { "<LazyInit>b__15_3", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c::setStaticF___9(::GlobalNamespace::QuickPlaySongPacksDropdown___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::QuickPlaySongPacksDropdown___c*, "<>9", ::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(
      std::forward<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(value));
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown___c* GlobalNamespace::QuickPlaySongPacksDropdown___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::QuickPlaySongPacksDropdown___c*, "<>9", ::GlobalNamespace::QuickPlaySongPacksDropdown___c*>();
}
inline void
GlobalNamespace::QuickPlaySongPacksDropdown___c::setStaticF___9__15_4(::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>*, "<>9__15_4",
                                    ::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>* GlobalNamespace::QuickPlaySongPacksDropdown___c::getStaticF___9__15_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>*, "<>9__15_4",
                                           ::GlobalNamespace::QuickPlaySongPacksDropdown___c*>();
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c::setStaticF___9__15_2(
    ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*, "<>9__15_2",
      ::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*
GlobalNamespace::QuickPlaySongPacksDropdown___c::getStaticF___9__15_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*, "<>9__15_2",
      ::GlobalNamespace::QuickPlaySongPacksDropdown___c*>();
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c::setStaticF___9__15_3(::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>*, "<>9__15_3", ::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>* GlobalNamespace::QuickPlaySongPacksDropdown___c::getStaticF___9__15_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>*, "<>9__15_3",
                                           ::GlobalNamespace::QuickPlaySongPacksDropdown___c*>();
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*
GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_2(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack* localizedPack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(),
                                                           { "<LazyInit>b__15_2", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>(this, ___internal_method, localizedPack);
}
inline bool GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_4(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName* packName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(),
                                              { "<LazyInit>b__15_4", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packName);
}
inline ::StringW GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_3(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(),
                                                           { "<LazyInit>b__15_3", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, item);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown___c* GlobalNamespace::QuickPlaySongPacksDropdown___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown___c::QuickPlaySongPacksDropdown___c() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59444b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0._SelectCellWithSerializedName_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::*)(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::_SelectCellWithSerializedName_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59448ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>(),
                                                             { "<SelectCellWithSerializedName>b__0", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::__cordl_internal_get_serializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr ::StringW const& GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::__cordl_internal_get_serializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::__cordl_internal_set_serializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serializedName = value;
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::_SelectCellWithSerializedName_b__0(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>(),
                                                           { "<SelectCellWithSerializedName>b__0", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0* GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::QuickPlaySongPacksDropdown___c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5943b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                                                           { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.remove_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5943c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                                                           { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&::GlobalNamespace::QuickPlaySongPacksDropdown::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5943d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&::GlobalNamespace::QuickPlaySongPacksDropdown::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5943da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.SetOverrideSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::SetOverrideSongPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5943e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                             { "SetOverrideSongPacks", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.GetSelectedSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&::GlobalNamespace::QuickPlaySongPacksDropdown::GetSelectedSerializedName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5943e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "GetSelectedSerializedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.SelectCellWithSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::StringW)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::SelectCellWithSerializedName)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x594433c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "SelectCellWithSerializedName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.HandleSimpleTextDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59444b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                             { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.LazyInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&::GlobalNamespace::QuickPlaySongPacksDropdown::LazyInit)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x5943f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "LazyInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&::GlobalNamespace::QuickPlaySongPacksDropdown::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59444d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown._LazyInit_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::StringW)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59444dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "<LazyInit>b__15_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown._LazyInit_b__15_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* (
    ::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_1)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x594458c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                             { "<LazyInit>b__15_1", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::SimpleTextDropdown>& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__simpleTextDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__simpleTextDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____simpleTextDropdown;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____simpleTextDropdown = value;
}
constexpr ::GlobalNamespace::SongPackMasksModel*& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr ::GlobalNamespace::SongPackMasksModel* const& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPackMasksModel = value;
}
constexpr ::System::Action_1<int32_t>*& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr ::System::Action_1<int32_t>* const& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectCellWithIdxEvent = value;
}
constexpr bool& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__quickPlaySongPacksOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySongPacksOverride;
}
constexpr ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* const& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__quickPlaySongPacksOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySongPacksOverride;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_set__quickPlaySongPacksOverride(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quickPlaySongPacksOverride = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* const&
GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_set__data(::System::Collections::Generic::List_1<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                                                         { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                                                         { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::SetOverrideSongPacks(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* quickPlaySongPacksOverride) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                           { "SetOverrideSongPacks", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, quickPlaySongPacksOverride);
}
inline ::StringW GlobalNamespace::QuickPlaySongPacksDropdown::GetSelectedSerializedName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "GetSelectedSerializedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::SelectCellWithSerializedName(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "SelectCellWithSerializedName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializedName);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                           { "HandleSimpleTextDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdownWithTableView, idx);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "LazyInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_0(::StringW serializedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(), { "<LazyInit>b__15_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>(this, ___internal_method, serializedName);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*
GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_1(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack* pack) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QuickPlaySongPacksDropdown*>(),
                                                           { "<LazyInit>b__15_1", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>(this, ___internal_method, pack);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown* GlobalNamespace::QuickPlaySongPacksDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QuickPlaySongPacksDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown::QuickPlaySongPacksDropdown() {}
