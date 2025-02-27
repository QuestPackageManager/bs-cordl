#pragma once
// IWYU pragma private; include "GlobalNamespace/QuickPlaySongPacksDropdown.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c1bfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem::QuickPlaySongPacksDropdown_SongPackMaskItem() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown___c::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c1c0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c._LazyInit_b__15_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* (
    ::GlobalNamespace::QuickPlaySongPacksDropdown___c::*)(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_2)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3c1c104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get(), "<LazyInit>b__15_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c._LazyInit_b__15_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuickPlaySongPacksDropdown___c::*)(
    ::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*)>(&::GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3c1c2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get(), "<LazyInit>b__15_4", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c._LazyInit_b__15_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::QuickPlaySongPacksDropdown___c::*)(
    ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*)>(&::GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3c1c2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get(), "<LazyInit>b__15_3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c::setStaticF___9(::GlobalNamespace::QuickPlaySongPacksDropdown___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::QuickPlaySongPacksDropdown___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get>(
      std::forward<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>(value));
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown___c* GlobalNamespace::QuickPlaySongPacksDropdown___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::QuickPlaySongPacksDropdown___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get>();
}
inline void
GlobalNamespace::QuickPlaySongPacksDropdown___c::setStaticF___9__15_4(::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>*, "<>9__15_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>* GlobalNamespace::QuickPlaySongPacksDropdown___c::getStaticF___9__15_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*, bool>*, "<>9__15_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get>();
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c::setStaticF___9__15_2(
    ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*, "<>9__15_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*
GlobalNamespace::QuickPlaySongPacksDropdown___c::getStaticF___9__15_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*, ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>*, "<>9__15_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get>();
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c::setStaticF___9__15_3(::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>*, "<>9__15_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>* GlobalNamespace::QuickPlaySongPacksDropdown___c::getStaticF___9__15_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, ::StringW>*, "<>9__15_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get>();
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*
GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_2(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack* localizedPack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get(), "<LazyInit>b__15_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, false>(this, ___internal_method, localizedPack);
}
inline bool GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_4(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName* packName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get(), "<LazyInit>b__15_4", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_LocalizedCustomPackName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packName);
}
inline ::StringW GlobalNamespace::QuickPlaySongPacksDropdown___c::_LazyInit_b__15_3(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>::get(), "<LazyInit>b__15_3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, item);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown___c* GlobalNamespace::QuickPlaySongPacksDropdown___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuickPlaySongPacksDropdown___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown___c::QuickPlaySongPacksDropdown___c() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c1bef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0._SelectCellWithSerializedName_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::*)(
    ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*)>(&::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::_SelectCellWithSerializedName_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c1c304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>::get(), "<SelectCellWithSerializedName>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::_SelectCellWithSerializedName_b__0(::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* item) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>::get(),
                                 "<SelectCellWithSerializedName>b__0", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0* GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown___c__DisplayClass13_0::QuickPlaySongPacksDropdown___c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c1b698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "add_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.remove_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c1b748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "remove_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&::GlobalNamespace::QuickPlaySongPacksDropdown::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3c1b7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3c1b888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.SetOverrideSongPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(
    ::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*)>(&::GlobalNamespace::QuickPlaySongPacksDropdown::SetOverrideSongPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c1b958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "SetOverrideSongPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.GetSelectedSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::GetSelectedSerializedName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3c1b960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(),
                                                                               "GetSelectedSerializedName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.SelectCellWithSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::StringW)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::SelectCellWithSerializedName)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3c1bda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "SelectCellWithSerializedName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.HandleSimpleTextDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3c1bf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(),
                                                 "HandleSimpleTextDropdownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.LazyInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::LazyInit)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x3c1b9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(),
                                                                               "LazyInit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(&::GlobalNamespace::QuickPlaySongPacksDropdown::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c1bf24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown._LazyInit_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* (
    ::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::StringW)>(&::GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3c1bf2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "<LazyInit>b__15_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown._LazyInit_b__15_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* (
    ::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3c1bfe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "<LazyInit>b__15_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simpleTextDropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMasksModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectCellWithIdxEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quickPlaySongPacksOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "add_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "remove_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::SetOverrideSongPacks(::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride* quickPlaySongPacksOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "SetOverrideSongPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySetupData_QuickPlaySongPacksOverride*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, quickPlaySongPacksOverride);
}
inline ::StringW GlobalNamespace::QuickPlaySongPacksDropdown::GetSelectedSerializedName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(),
                                                                             "GetSelectedSerializedName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::SelectCellWithSerializedName(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "SelectCellWithSerializedName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializedName);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(),
                                               "HandleSimpleTextDropdownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::DropdownWithTableView*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dropdownWithTableView, idx);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "LazyInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem* GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_0(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "<LazyInit>b__15_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, false>(this, ___internal_method, serializedName);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*
GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_1(::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "<LazyInit>b__15_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::QuickPlaySongPacksOverride_QuickPlaySetupData_PredefinedPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuickPlaySongPacksDropdown_SongPackMaskItem*, false>(this, ___internal_method, pack);
}
inline ::GlobalNamespace::QuickPlaySongPacksDropdown* GlobalNamespace::QuickPlaySongPacksDropdown::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuickPlaySongPacksDropdown*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown::QuickPlaySongPacksDropdown() {}
