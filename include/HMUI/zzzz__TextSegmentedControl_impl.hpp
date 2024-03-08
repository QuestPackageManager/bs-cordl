#pragma once
#include "HMUI/zzzz__SegmentedControl_impl.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControlCell_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::HMUI::TextSegmentedControl.SetTexts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TextSegmentedControl::*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(
    &::HMUI::TextSegmentedControl::SetTexts)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22e3124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), "SetTexts", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControl.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::TextSegmentedControl::*)()>(&::HMUI::TextSegmentedControl::NumberOfCells)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22e313c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), "NumberOfCells",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControl.CellForCellNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::SegmentedControlCell> (::HMUI::TextSegmentedControl::*)(int32_t)>(
    &::HMUI::TextSegmentedControl::CellForCellNumber)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x22e31e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), "CellForCellNumber", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TextSegmentedControl::*)()>(&::HMUI::TextSegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22e351c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
constexpr HMUI::TextSegmentedControl::operator ::HMUI::__SegmentedControl__IDataSource*() noexcept {
  return static_cast<::HMUI::__SegmentedControl__IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::__SegmentedControl__IDataSource"
constexpr ::HMUI::__SegmentedControl__IDataSource* HMUI::TextSegmentedControl::i___HMUI____SegmentedControl__IDataSource() noexcept {
  return static_cast<::HMUI::__SegmentedControl__IDataSource*>(static_cast<void*>(this));
}
constexpr float_t& HMUI::TextSegmentedControl::__cordl_internal_get__fontSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSize;
}
constexpr float_t const& HMUI::TextSegmentedControl::__cordl_internal_get__fontSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSize;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__fontSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fontSize = value;
}
constexpr bool& HMUI::TextSegmentedControl::__cordl_internal_get__overrideCellSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideCellSize;
}
constexpr bool const& HMUI::TextSegmentedControl::__cordl_internal_get__overrideCellSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideCellSize;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__overrideCellSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideCellSize = value;
}
constexpr float_t& HMUI::TextSegmentedControl::__cordl_internal_get__padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr float_t const& HMUI::TextSegmentedControl::__cordl_internal_get__padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__padding(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____padding = value;
}
constexpr bool& HMUI::TextSegmentedControl::__cordl_internal_get__hideCellBackground() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideCellBackground;
}
constexpr bool const& HMUI::TextSegmentedControl::__cordl_internal_get__hideCellBackground() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideCellBackground;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__hideCellBackground(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideCellBackground = value;
}
constexpr ::UnityW<::HMUI::TextSegmentedControlCell>& HMUI::TextSegmentedControl::__cordl_internal_get__firstCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCellPrefab;
}
constexpr ::UnityW<::HMUI::TextSegmentedControlCell> const& HMUI::TextSegmentedControl::__cordl_internal_get__firstCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstCellPrefab;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__firstCellPrefab(::UnityW<::HMUI::TextSegmentedControlCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____firstCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::TextSegmentedControlCell>& HMUI::TextSegmentedControl::__cordl_internal_get__lastCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCellPrefab;
}
constexpr ::UnityW<::HMUI::TextSegmentedControlCell> const& HMUI::TextSegmentedControl::__cordl_internal_get__lastCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastCellPrefab;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__lastCellPrefab(::UnityW<::HMUI::TextSegmentedControlCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::TextSegmentedControlCell>& HMUI::TextSegmentedControl::__cordl_internal_get__singleCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleCellPrefab;
}
constexpr ::UnityW<::HMUI::TextSegmentedControlCell> const& HMUI::TextSegmentedControl::__cordl_internal_get__singleCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleCellPrefab;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__singleCellPrefab(::UnityW<::HMUI::TextSegmentedControlCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____singleCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::TextSegmentedControlCell>& HMUI::TextSegmentedControl::__cordl_internal_get__middleCellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleCellPrefab;
}
constexpr ::UnityW<::HMUI::TextSegmentedControlCell> const& HMUI::TextSegmentedControl::__cordl_internal_get__middleCellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____middleCellPrefab;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__middleCellPrefab(::UnityW<::HMUI::TextSegmentedControlCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____middleCellPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>*& HMUI::TextSegmentedControl::__cordl_internal_get__texts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::StringW>*> const& HMUI::TextSegmentedControl::__cordl_internal_get__texts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texts;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__texts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____texts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::TextSegmentedControl::SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* texts) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), "SetTexts", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texts);
}
inline int32_t HMUI::TextSegmentedControl::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), "NumberOfCells",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::SegmentedControlCell> HMUI::TextSegmentedControl::CellForCellNumber(int32_t cellNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), "CellForCellNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::SegmentedControlCell>, false>(this, ___internal_method, cellNumber);
}
inline ::HMUI::TextSegmentedControl* HMUI::TextSegmentedControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::TextSegmentedControl*>());
}
inline void HMUI::TextSegmentedControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::TextSegmentedControl::TextSegmentedControl() {}
