#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorSchemeDropdown.hpp"
#include "HMUI/zzzz__DropdownWithTableView_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeDropdown_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeTableCell_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeView_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "HMUI/zzzz__DropdownWithTableView_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.LazyInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeDropdown::*)()>(&::GlobalNamespace::ColorSchemeDropdown::LazyInit)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x591ff78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "LazyInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeDropdown::*)()>(&::GlobalNamespace::ColorSchemeDropdown::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x592003c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { ::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeDropdown::*)(::HMUI::TableView_IDataSource*)>(&::GlobalNamespace::ColorSchemeDropdown::Init)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59200cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "Init", {}, { ::i2c::type_of<::HMUI::TableView_IDataSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeDropdown::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*)>(
    &::GlobalNamespace::ColorSchemeDropdown::SetData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5920104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(),
                                                             { "SetData", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ColorSchemeDropdown::*)(int32_t)>(&::GlobalNamespace::ColorSchemeDropdown::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592035c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ColorSchemeDropdown::*)()>(&::GlobalNamespace::ColorSchemeDropdown::NumberOfCells)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5920364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "NumberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::ColorSchemeDropdown::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::ColorSchemeDropdown::CellForIdx)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5920414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.SelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeDropdown::*)(int32_t)>(&::GlobalNamespace::ColorSchemeDropdown::SelectCellWithIdx)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5920770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { ::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.HandleDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeDropdown::*)(::HMUI::DropdownWithTableView*, int32_t)>(
    &::GlobalNamespace::ColorSchemeDropdown::HandleDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5920840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(),
                                                             { "HandleDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown.RefreshUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeDropdown::*)(::GlobalNamespace::ColorScheme*)>(&::GlobalNamespace::ColorSchemeDropdown::RefreshUI)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x592026c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "RefreshUI", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeDropdown._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeDropdown::*)()>(&::GlobalNamespace::ColorSchemeDropdown::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5920b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::ColorSchemeDropdown::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeView>& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__colorSchemeView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeView;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeView> const& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__colorSchemeView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeView;
}
constexpr void GlobalNamespace::ColorSchemeDropdown::__cordl_internal_set__colorSchemeView(::UnityW<::GlobalNamespace::ColorSchemeView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemeView = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeTableCell>& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__cellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeTableCell> const& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__cellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr void GlobalNamespace::ColorSchemeDropdown::__cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::ColorSchemeTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellPrefab = value;
}
constexpr ::StringW& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__cellReuseIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellReuseIdentifier;
}
constexpr ::StringW const& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__cellReuseIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellReuseIdentifier;
}
constexpr void GlobalNamespace::ColorSchemeDropdown::__cordl_internal_set__cellReuseIdentifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellReuseIdentifier = value;
}
constexpr float_t& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__cellSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellSize;
}
constexpr float_t const& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__cellSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellSize;
}
constexpr void GlobalNamespace::ColorSchemeDropdown::__cordl_internal_set__cellSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellSize = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__colorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* const& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__colorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr void GlobalNamespace::ColorSchemeDropdown::__cordl_internal_set__colorSchemes(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemes = value;
}
constexpr bool& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::ColorSchemeDropdown::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::ColorSchemeDropdown::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
inline void GlobalNamespace::ColorSchemeDropdown::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "LazyInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSchemeDropdown::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSchemeDropdown::Init(::HMUI::TableView_IDataSource* initTableViewDataSource) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "Init", {}, { ::i2c::type_of<::HMUI::TableView_IDataSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initTableViewDataSource);
}
inline void GlobalNamespace::ColorSchemeDropdown::SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>* colorSchemes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(),
                                                           { "SetData", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::ColorScheme*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorSchemes);
}
inline float_t GlobalNamespace::ColorSchemeDropdown::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline int32_t GlobalNamespace::ColorSchemeDropdown::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::ColorSchemeDropdown::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, idx);
}
inline void GlobalNamespace::ColorSchemeDropdown::SelectCellWithIdx(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void GlobalNamespace::ColorSchemeDropdown::HandleDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(),
                                                           { "HandleDidSelectCellWithIdx", {}, { ::i2c::type_of<::HMUI::DropdownWithTableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdownWithTableView, idx);
}
inline void GlobalNamespace::ColorSchemeDropdown::RefreshUI(::GlobalNamespace::ColorScheme* colorScheme) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { "RefreshUI", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorScheme);
}
inline void GlobalNamespace::ColorSchemeDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeDropdown*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSchemeDropdown* GlobalNamespace::ColorSchemeDropdown::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSchemeDropdown*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
constexpr GlobalNamespace::ColorSchemeDropdown::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
constexpr ::HMUI::TableView_IDataSource* GlobalNamespace::ColorSchemeDropdown::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeDropdown::ColorSchemeDropdown() {}
