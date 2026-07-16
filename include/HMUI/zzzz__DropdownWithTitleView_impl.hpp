#pragma once
// IWYU pragma private; include "HMUI/DropdownWithTitleView.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_impl.hpp"
#include "HMUI/zzzz__DropdownWithTitleView_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::HMUI::DropdownWithTitleView.RefreshSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::DropdownWithTitleView::*)(::HMUI::TableView_IDataSource*)>(&::HMUI::DropdownWithTitleView::RefreshSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5884ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::DropdownWithTitleView*>(), { ::i2c::class_of<::HMUI::DropdownWithTitleView*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::DropdownWithTitleView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::DropdownWithTitleView::*)()>(&::HMUI::DropdownWithTitleView::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5884f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::DropdownWithTitleView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::DropdownWithTitleView::__cordl_internal_get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::DropdownWithTitleView::__cordl_internal_get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr void HMUI::DropdownWithTitleView::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rectTransform = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::DropdownWithTitleView::__cordl_internal_get__titleRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleRectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::DropdownWithTitleView::__cordl_internal_get__titleRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleRectTransform;
}
constexpr void HMUI::DropdownWithTitleView::__cordl_internal_set__titleRectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____titleRectTransform = value;
}
inline void HMUI::DropdownWithTitleView::RefreshSize(::HMUI::TableView_IDataSource* dataSource) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::DropdownWithTitleView*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void HMUI::DropdownWithTitleView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::DropdownWithTitleView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::DropdownWithTitleView* HMUI::DropdownWithTitleView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::DropdownWithTitleView*>());
}
// Ctor Parameters []
constexpr ::HMUI::DropdownWithTitleView::DropdownWithTitleView() {}
