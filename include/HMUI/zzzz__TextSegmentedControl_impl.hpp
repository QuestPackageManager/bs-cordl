#pragma once
// IWYU pragma private; include "HMUI/TextSegmentedControl.hpp"
#include "HMUI/zzzz__SegmentedControl_impl.hpp"
#include "TMPro/zzzz__TextOverflowModes_impl.hpp"
#include "HMUI/zzzz__TextSegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__TextSegmentedControlCell_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::HMUI::TextSegmentedControl.SetTexts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TextSegmentedControl::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::StringW>*, ::System::Collections::Generic::HashSet_1<int32_t>*)>(&::HMUI::TextSegmentedControl::SetTexts)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5da2668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), "SetTexts", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TextSegmentedControl.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::TextSegmentedControl::*)()>(&::HMUI::TextSegmentedControl::NumberOfCells)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5da2680;

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
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5da2730;

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
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5da2c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
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
constexpr bool& HMUI::TextSegmentedControl::__cordl_internal_get__fixedCellSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedCellSize;
}
constexpr bool const& HMUI::TextSegmentedControl::__cordl_internal_get__fixedCellSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedCellSize;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__fixedCellSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedCellSize = value;
}
constexpr float_t& HMUI::TextSegmentedControl::__cordl_internal_get__fixedCellSizeAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedCellSizeAmount;
}
constexpr float_t const& HMUI::TextSegmentedControl::__cordl_internal_get__fixedCellSizeAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedCellSizeAmount;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__fixedCellSizeAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedCellSizeAmount = value;
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
constexpr bool& HMUI::TextSegmentedControl::__cordl_internal_get__enableWordWrapping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableWordWrapping;
}
constexpr bool const& HMUI::TextSegmentedControl::__cordl_internal_get__enableWordWrapping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enableWordWrapping;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__enableWordWrapping(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enableWordWrapping = value;
}
constexpr ::TMPro::TextOverflowModes& HMUI::TextSegmentedControl::__cordl_internal_get__textOverflowMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textOverflowMode;
}
constexpr ::TMPro::TextOverflowModes const& HMUI::TextSegmentedControl::__cordl_internal_get__textOverflowMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textOverflowMode;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__textOverflowMode(::TMPro::TextOverflowModes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textOverflowMode = value;
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
constexpr ::System::Collections::Generic::IReadOnlyList_1<::StringW>* const& HMUI::TextSegmentedControl::__cordl_internal_get__texts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____texts;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__texts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____texts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& HMUI::TextSegmentedControl::__cordl_internal_get__disabledIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledIndexes;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& HMUI::TextSegmentedControl::__cordl_internal_get__disabledIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledIndexes;
}
constexpr void HMUI::TextSegmentedControl::__cordl_internal_set__disabledIndexes(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabledIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::TextSegmentedControl::SetTexts(::System::Collections::Generic::IReadOnlyList_1<::StringW>* texts, ::System::Collections::Generic::HashSet_1<int32_t>* disabledIndexes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), "SetTexts", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texts, disabledIndexes);
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
inline void HMUI::TextSegmentedControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TextSegmentedControl*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::TextSegmentedControl* HMUI::TextSegmentedControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::TextSegmentedControl*>());
}
/// @brief Convert operator to "::HMUI::SegmentedControl_IDataSource"
constexpr HMUI::TextSegmentedControl::operator ::HMUI::SegmentedControl_IDataSource*() noexcept {
  return static_cast<::HMUI::SegmentedControl_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::SegmentedControl_IDataSource"
constexpr ::HMUI::SegmentedControl_IDataSource* HMUI::TextSegmentedControl::i___HMUI__SegmentedControl_IDataSource() noexcept {
  return static_cast<::HMUI::SegmentedControl_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::TextSegmentedControl::TextSegmentedControl() {}
