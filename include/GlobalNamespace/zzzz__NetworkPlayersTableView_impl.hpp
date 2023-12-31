#pragma once
#include "GlobalNamespace/zzzz__NetworkPlayersTableView_impl.hpp"
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
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::__NetworkPlayersTableView__CellInfo__CellType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::__NetworkPlayersTableView__CellInfo__CellType() {}
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::Header{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::Player{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType::Options{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__NetworkPlayersTableView__CellInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__NetworkPlayersTableView__CellInfo::*)()>(
    &::GlobalNamespace::__NetworkPlayersTableView__CellInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a958c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void GlobalNamespace::__NetworkPlayersTableView__CellInfo::__set_type(::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_headerString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerString;
}
constexpr ::StringW const& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_headerString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerString;
}
constexpr void GlobalNamespace::__NetworkPlayersTableView__CellInfo::__set_headerString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___headerString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr void GlobalNamespace::__NetworkPlayersTableView__CellInfo::__set_player(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___player)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_lastCellInParty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCellInParty;
}
constexpr bool const& GlobalNamespace::__NetworkPlayersTableView__CellInfo::__get_lastCellInParty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastCellInParty;
}
constexpr void GlobalNamespace::__NetworkPlayersTableView__CellInfo::__set_lastCellInParty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastCellInParty = value;
}
inline ::GlobalNamespace::__NetworkPlayersTableView__CellInfo* GlobalNamespace::__NetworkPlayersTableView__CellInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>());
}
inline void GlobalNamespace::__NetworkPlayersTableView__CellInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo::__NetworkPlayersTableView__CellInfo() {}
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.CellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::NetworkPlayersTableView::*)()>(&::GlobalNamespace::NetworkPlayersTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a87f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "CellSize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NetworkPlayersTableView::*)()>(
    &::GlobalNamespace::NetworkPlayersTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22a8800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                                                                               "NumberOfCells", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.CellForIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (::GlobalNamespace::NetworkPlayersTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::NetworkPlayersTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0x22a8848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "CellForIdx", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.AddPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, ::StringW)>(&::GlobalNamespace::NetworkPlayersTableView::AddPlayers)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x22a8ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "AddPlayers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.SetParties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*, ::StringW, ::StringW)>(
    &::GlobalNamespace::NetworkPlayersTableView::SetParties)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x22a98e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "SetParties", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
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
  constexpr static std::size_t addrs = 0x22a9a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "HandleCellWasPressed", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView.HasVisibleOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::INetworkPlayer*)>(&::GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x22a9594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "HasVisibleOptions", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayersTableView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NetworkPlayersTableView::*)()>(&::GlobalNamespace::NetworkPlayersTableView::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22a9a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr GlobalNamespace::NetworkPlayersTableView::operator ::HMUI::__TableView__IDataSource*() noexcept {
  return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::__TableView__IDataSource"
constexpr ::HMUI::__TableView__IDataSource* GlobalNamespace::NetworkPlayersTableView::i___HMUI____TableView__IDataSource() noexcept {
  return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
constexpr ::HMUI::TableView*& GlobalNamespace::NetworkPlayersTableView::__get__tableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& GlobalNamespace::NetworkPlayersTableView::__get__tableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__tableView(::HMUI::TableView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NetworkPlayerTableCell*& GlobalNamespace::NetworkPlayersTableView::__get__playerCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerTableCell*> const& GlobalNamespace::NetworkPlayersTableView::__get__playerCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCellPrefab;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__playerCellPrefab(::GlobalNamespace::NetworkPlayerTableCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NetworkPlayerOptionsTableCell*& GlobalNamespace::NetworkPlayersTableView::__get__optionsCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsCellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerOptionsTableCell*> const& GlobalNamespace::NetworkPlayersTableView::__get__optionsCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionsCellPrefab;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__optionsCellPrefab(::GlobalNamespace::NetworkPlayerOptionsTableCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionsCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LevelPackHeaderTableCell*& GlobalNamespace::NetworkPlayersTableView::__get__headerCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerCellPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackHeaderTableCell*> const& GlobalNamespace::NetworkPlayersTableView::__get__headerCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerCellPrefab;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__headerCellPrefab(::GlobalNamespace::LevelPackHeaderTableCell* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headerCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::NetworkPlayersTableView::__get__rowHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowHeight;
}
constexpr float_t const& GlobalNamespace::NetworkPlayersTableView::__get__rowHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rowHeight;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__rowHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rowHeight = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*& GlobalNamespace::NetworkPlayersTableView::__get__cellInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*> const&
GlobalNamespace::NetworkPlayersTableView::__get__cellInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellInfo;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__cellInfo(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cellInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::NetworkPlayersTableView::__get__selectedCellIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIndex;
}
constexpr int32_t const& GlobalNamespace::NetworkPlayersTableView::__get__selectedCellIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIndex;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__selectedCellIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedCellIndex = value;
}
constexpr ::StringW& GlobalNamespace::NetworkPlayersTableView::__get__selectedPlayerID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPlayerID;
}
constexpr ::StringW const& GlobalNamespace::NetworkPlayersTableView::__get__selectedPlayerID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedPlayerID;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__selectedPlayerID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedPlayerID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::NetworkPlayersTableView::__get__selectedCellHasOptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellHasOptions;
}
constexpr bool const& GlobalNamespace::NetworkPlayersTableView::__get__selectedCellHasOptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellHasOptions;
}
constexpr void GlobalNamespace::NetworkPlayersTableView::__set__selectedCellHasOptions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedCellHasOptions = value;
}
inline float_t GlobalNamespace::NetworkPlayersTableView::CellSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "CellSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NetworkPlayersTableView::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(),
                                                                             "NumberOfCells", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HMUI::TableCell* GlobalNamespace::NetworkPlayersTableView::CellForIdx(::HMUI::TableView* tableView, int32_t row) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "CellForIdx", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(this, ___internal_method, tableView, row);
}
inline void GlobalNamespace::NetworkPlayersTableView::AddPlayers(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* players, ::StringW title) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "AddPlayers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, players, title);
}
inline void GlobalNamespace::NetworkPlayersTableView::SetParties(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* partyPlayers,
                                                                 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* otherPlayers, ::StringW myPartyTitle,
                                                                 ::StringW otherPlayersTitle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "SetParties", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, partyPlayers, otherPlayers, myPartyTitle, otherPlayersTitle);
}
inline void GlobalNamespace::NetworkPlayersTableView::HandleCellWasPressed(::HMUI::TableView* tableView, ::HMUI::TableCell* tableCell) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "HandleCellWasPressed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableView, tableCell);
}
inline bool GlobalNamespace::NetworkPlayersTableView::HasVisibleOptions(::GlobalNamespace::INetworkPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), "HasVisibleOptions", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, player);
}
inline ::GlobalNamespace::NetworkPlayersTableView* GlobalNamespace::NetworkPlayersTableView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NetworkPlayersTableView*>());
}
inline void GlobalNamespace::NetworkPlayersTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NetworkPlayersTableView*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkPlayersTableView::NetworkPlayersTableView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
