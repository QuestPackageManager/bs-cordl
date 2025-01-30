#pragma once
// IWYU pragma private; include "HMUI/DropdownWithTitleView.hpp"
#include "HMUI/zzzz__SimpleTextDropdown_impl.hpp"
#include "HMUI/zzzz__DropdownWithTitleView_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::HMUI::DropdownWithTitleView.RefreshSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::DropdownWithTitleView::*)(::HMUI::TableView_IDataSource*)>(
    &::HMUI::DropdownWithTitleView::RefreshSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x39f83d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::DropdownWithTitleView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::DropdownWithTitleView*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::DropdownWithTitleView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::DropdownWithTitleView::*)()>(&::HMUI::DropdownWithTitleView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f8438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::DropdownWithTitleView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____titleRectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::DropdownWithTitleView::RefreshSize(::HMUI::TableView_IDataSource* dataSource) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::DropdownWithTitleView*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dataSource);
}
inline void HMUI::DropdownWithTitleView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::DropdownWithTitleView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::DropdownWithTitleView* HMUI::DropdownWithTitleView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::DropdownWithTitleView*>());
}
// Ctor Parameters []
constexpr ::HMUI::DropdownWithTitleView::DropdownWithTitleView() {}
