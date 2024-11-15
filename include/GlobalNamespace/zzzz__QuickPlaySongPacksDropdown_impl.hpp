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
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::*)()>(
    &::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ba791c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_get_serializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr ::StringW const& GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_get_serializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr void GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_set_serializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_get_localizedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr ::StringW const& GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_get_localizedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localizedName;
}
constexpr void GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_set_localizedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localizedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_get_order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr int32_t const& GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_get_order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___order;
}
constexpr void GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_set_order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___order = value;
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_get_songPackMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songPackMask;
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_get_songPackMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songPackMask;
}
constexpr void GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__cordl_internal_set_songPackMask(::GlobalNamespace::SongPackMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songPackMask = value;
}
inline ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>());
}
inline void GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem::__QuickPlaySongPacksDropdown__SongPackMaskItem() {}
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySongPacksDropdown____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__QuickPlaySongPacksDropdown____c::*)()>(
    &::GlobalNamespace::__QuickPlaySongPacksDropdown____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ba7a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySongPacksDropdown____c._LazyInit_b__15_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* (
    ::GlobalNamespace::__QuickPlaySongPacksDropdown____c::*)(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*)>(
    &::GlobalNamespace::__QuickPlaySongPacksDropdown____c::_LazyInit_b__15_2)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x3ba7a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get(), "<LazyInit>b__15_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySongPacksDropdown____c._LazyInit_b__15_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__QuickPlaySongPacksDropdown____c::*)(
    ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*)>(&::GlobalNamespace::__QuickPlaySongPacksDropdown____c::_LazyInit_b__15_4)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3ba7bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get(), "<LazyInit>b__15_4", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySongPacksDropdown____c._LazyInit_b__15_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__QuickPlaySongPacksDropdown____c::*)(
    ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*)>(&::GlobalNamespace::__QuickPlaySongPacksDropdown____c::_LazyInit_b__15_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3ba7c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get(), "<LazyInit>b__15_3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__QuickPlaySongPacksDropdown____c::setStaticF___9(::GlobalNamespace::__QuickPlaySongPacksDropdown____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get>(
      std::forward<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>(value));
}
inline ::GlobalNamespace::__QuickPlaySongPacksDropdown____c* GlobalNamespace::__QuickPlaySongPacksDropdown____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get>();
}
inline void
GlobalNamespace::__QuickPlaySongPacksDropdown____c::setStaticF___9__15_4(::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, bool>*, "<>9__15_4",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, bool>*
GlobalNamespace::__QuickPlaySongPacksDropdown____c::getStaticF___9__15_4() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*, bool>*, "<>9__15_4",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get>();
}
inline void GlobalNamespace::__QuickPlaySongPacksDropdown____c::setStaticF___9__15_2(
    ::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*, ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*, ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>*, "<>9__15_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*, ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>*>(
          value));
}
inline ::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*, ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>*
GlobalNamespace::__QuickPlaySongPacksDropdown____c::getStaticF___9__15_2() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*, ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>*, "<>9__15_2",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get>();
}
inline void GlobalNamespace::__QuickPlaySongPacksDropdown____c::setStaticF___9__15_3(::System::Func_2<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, ::StringW>*, "<>9__15_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, ::StringW>* GlobalNamespace::__QuickPlaySongPacksDropdown____c::getStaticF___9__15_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, ::StringW>*, "<>9__15_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get>();
}
inline ::GlobalNamespace::__QuickPlaySongPacksDropdown____c* GlobalNamespace::__QuickPlaySongPacksDropdown____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>());
}
inline void GlobalNamespace::__QuickPlaySongPacksDropdown____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*
GlobalNamespace::__QuickPlaySongPacksDropdown____c::_LazyInit_b__15_2(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack* localizedPack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get(), "<LazyInit>b__15_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, false>(this, ___internal_method, localizedPack);
}
inline bool GlobalNamespace::__QuickPlaySongPacksDropdown____c::_LazyInit_b__15_4(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName* packName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get(), "<LazyInit>b__15_4", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packName);
}
inline ::StringW GlobalNamespace::__QuickPlaySongPacksDropdown____c::_LazyInit_b__15_3(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c*>::get(), "<LazyInit>b__15_3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__QuickPlaySongPacksDropdown____c::__QuickPlaySongPacksDropdown____c() {}
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ba7838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0._SelectCellWithSerializedName_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::*)(
    ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*)>(&::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::_SelectCellWithSerializedName_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3ba7c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0*>::get(), "<SelectCellWithSerializedName>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::__cordl_internal_get_serializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr ::StringW const& GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::__cordl_internal_get_serializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serializedName;
}
constexpr void GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::__cordl_internal_set_serializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0* GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0*>());
}
inline void GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::_SelectCellWithSerializedName_b__0(::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0*>::get(), "<SelectCellWithSerializedName>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__QuickPlaySongPacksDropdown____c__DisplayClass13_0::__QuickPlaySongPacksDropdown____c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ba6fd8;

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
  constexpr static std::size_t addrs = 0x3ba7088;

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
  constexpr static std::size_t addrs = 0x3ba7138;

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
  constexpr static std::size_t addrs = 0x3ba71c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.SetOverrideSongPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::QuickPlaySongPacksDropdown::*)(
    ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*)>(&::GlobalNamespace::QuickPlaySongPacksDropdown::SetOverrideSongPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ba7298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "SetOverrideSongPacks", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown.GetSelectedSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::QuickPlaySongPacksDropdown::*)()>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::GetSelectedSerializedName)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3ba72a0;

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
  constexpr static std::size_t addrs = 0x3ba76e4;

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
  constexpr static std::size_t addrs = 0x3ba7840;

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
  constexpr static std::size_t addrs = 0x3ba7310;

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
  constexpr static std::size_t addrs = 0x3ba7864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown._LazyInit_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* (
    ::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::StringW)>(&::GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ba786c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "<LazyInit>b__15_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::QuickPlaySongPacksDropdown._LazyInit_b__15_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* (
    ::GlobalNamespace::QuickPlaySongPacksDropdown::*)(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*)>(
    &::GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3ba7924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "<LazyInit>b__15_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>::get() })));
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__songPackMasksModel() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get_didSelectCellWithIdxEvent() const {
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
constexpr ::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__quickPlaySongPacksOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySongPacksOverride;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*> const&
GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__quickPlaySongPacksOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySongPacksOverride;
}
constexpr void GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_set__quickPlaySongPacksOverride(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quickPlaySongPacksOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>*& GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>*> const&
GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void
GlobalNamespace::QuickPlaySongPacksDropdown::__cordl_internal_set__data(::System::Collections::Generic::List_1<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*>* value) {
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
inline void GlobalNamespace::QuickPlaySongPacksDropdown::SetOverrideSongPacks(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride* quickPlaySongPacksOverride) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "SetOverrideSongPacks", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride*>::get() })));
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
inline ::GlobalNamespace::QuickPlaySongPacksDropdown* GlobalNamespace::QuickPlaySongPacksDropdown::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::QuickPlaySongPacksDropdown*>());
}
inline void GlobalNamespace::QuickPlaySongPacksDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem* GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_0(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "<LazyInit>b__15_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, false>(this, ___internal_method, serializedName);
}
inline ::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*
GlobalNamespace::QuickPlaySongPacksDropdown::_LazyInit_b__15_1(::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::QuickPlaySongPacksDropdown*>::get(), "<LazyInit>b__15_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__QuickPlaySongPacksDropdown__SongPackMaskItem*, false>(this, ___internal_method, pack);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::QuickPlaySongPacksDropdown::QuickPlaySongPacksDropdown() {}
