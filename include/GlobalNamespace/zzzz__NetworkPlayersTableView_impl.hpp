#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkPlayersTableView.hpp"
#include "HMUI/zzzz__TableView_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayersTableView_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "GlobalNamespace/zzzz__LevelPackHeaderTableCell_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerOptionsTableCell_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerTableCell_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayersTableView_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType::CellInfo_NetworkPlayersTableView_CellType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType::CellInfo_NetworkPlayersTableView_CellType() {}
constexpr ::GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType::Header{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType::Player{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType::Options{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView_CellInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView_CellInfo::*)()>(
    &::GlobalNamespace::NetworkPlayersTableView_CellInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c11788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView_CellInfo*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType& GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType const& GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_set_type(::GlobalNamespace::CellInfo_NetworkPlayersTableView_CellType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_get_headerString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerString;
}
constexpr ::StringW const& GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_get_headerString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerString;
}
constexpr void GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_set_headerString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headerString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_get_player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr ::GlobalNamespace::INetworkPlayer* const& GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_get_player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr void GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_set_player(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___player)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_get_lastCellInParty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCellInParty;
}
constexpr bool const& GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_get_lastCellInParty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCellInParty;
}
constexpr void GlobalNamespace::NetworkPlayersTableView_CellInfo::__cordl_internal_set_lastCellInParty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastCellInParty = value;
}
inline void GlobalNamespace::NetworkPlayersTableView_CellInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView_CellInfo*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkPlayersTableView_CellInfo* GlobalNamespace::NetworkPlayersTableView_CellInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NetworkPlayersTableView_CellInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkPlayersTableView_CellInfo::NetworkPlayersTableView_CellInfo() {}
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.CellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NetworkPlayersTableView::*)(int32_t)>(
    &::GlobalNamespace::NetworkPlayersTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3c10a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "CellSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NetworkPlayersTableView::*)()>(
    &::GlobalNamespace::NetworkPlayersTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3c10a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                                                                               "NumberOfCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.CellForIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::NetworkPlayersTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::NetworkPlayersTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x3c10a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "CellForIdx", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.AddPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, ::StringW)>(&::GlobalNamespace::NetworkPlayersTableView::AddPlayers)> {
  constexpr static std::size_t size = 0x698;
  constexpr static std::size_t addrs = 0x3c110f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "AddPlayers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.SetParties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, ::StringW, ::StringW)>(
    &::GlobalNamespace::NetworkPlayersTableView::SetParties)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x3c11ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "SetParties", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.HandleCellWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(::HMUI::TableView*, ::HMUI::TableCell*)>(
    &::GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3c11c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "HandleCellWasPressed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.HasVisibleOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::INetworkPlayer*)>(&::GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x3c11790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "HasVisibleOptions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)()>(&::GlobalNamespace::NetworkPlayersTableView::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3c11c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TableView>& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__tableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr ::UnityW<::HMUI::TableView> const& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__tableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NetworkPlayerTableCell>& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__playerCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NetworkPlayerTableCell> const& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__playerCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCellPrefab;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__cordl_internal_set__playerCellPrefab(::UnityW<::GlobalNamespace::NetworkPlayerTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NetworkPlayerOptionsTableCell>& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__optionsCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsCellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NetworkPlayerOptionsTableCell> const& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__optionsCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsCellPrefab;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__cordl_internal_set__optionsCellPrefab(::UnityW<::GlobalNamespace::NetworkPlayerOptionsTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionsCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LevelPackHeaderTableCell>& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__headerCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerCellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> const& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__headerCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerCellPrefab;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__cordl_internal_set__headerCellPrefab(::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headerCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__rowHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowHeight;
}
constexpr float_t const& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__rowHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowHeight;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__cordl_internal_set__rowHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowHeight = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayersTableView_CellInfo*>*& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__cellInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellInfo;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayersTableView_CellInfo*>* const& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__cellInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellInfo;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__cordl_internal_set__cellInfo(::System::Collections::Generic::List_1<::GlobalNamespace::NetworkPlayersTableView_CellInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cellInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__selectedCellIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIndex;
}
constexpr int32_t const& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__selectedCellIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIndex;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__cordl_internal_set__selectedCellIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedCellIndex = value;
}
constexpr ::StringW& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__selectedPlayerID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPlayerID;
}
constexpr ::StringW const& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__selectedPlayerID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPlayerID;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__cordl_internal_set__selectedPlayerID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedPlayerID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__selectedCellHasOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellHasOptions;
}
constexpr bool const& GlobalNamespace::NetworkPlayersTableView::__cordl_internal_get__selectedCellHasOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellHasOptions;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__cordl_internal_set__selectedCellHasOptions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedCellHasOptions = value;
}
inline float_t GlobalNamespace::NetworkPlayersTableView::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "CellSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, idx);
}
inline int32_t GlobalNamespace::NetworkPlayersTableView::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                                                                             "NumberOfCells", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::NetworkPlayersTableView::CellForIdx(::HMUI::TableView* tableView, int32_t row) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "CellForIdx", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>, false>(this, ___internal_method, tableView, row);
}
inline void GlobalNamespace::NetworkPlayersTableView::AddPlayers(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* players, ::StringW title) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "AddPlayers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, players, title);
}
inline void GlobalNamespace::NetworkPlayersTableView::SetParties(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* partyPlayers,
                                                                 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* otherPlayers, ::StringW myPartyTitle,
                                                                 ::StringW otherPlayersTitle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "SetParties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, partyPlayers, otherPlayers, myPartyTitle, otherPlayersTitle);
}
inline void GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed(::HMUI::TableView* tableView, ::HMUI::TableCell* tableCell) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                                                                             "HandleCellWasPressed", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableView, tableCell);
}
inline bool GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "HasVisibleOptions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, player);
}
inline void GlobalNamespace::NetworkPlayersTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkPlayersTableView* GlobalNamespace::NetworkPlayersTableView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NetworkPlayersTableView*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
constexpr GlobalNamespace::NetworkPlayersTableView::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
constexpr ::HMUI::TableView_IDataSource* GlobalNamespace::NetworkPlayersTableView::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkPlayersTableView::NetworkPlayersTableView() {}
