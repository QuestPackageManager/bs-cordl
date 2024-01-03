#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__PackLevelListHeaderTableCell_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::StringW)>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x227c2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), "set_text",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::get_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x227c310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                                               "get_text", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227c334;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x227c3c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.RefreshVisuals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x227c338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                                               "RefreshVisuals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x227c3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::PackLevelListHeaderTableCell::__get__selectedHighlightElementsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedHighlightElementsColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PackLevelListHeaderTableCell::__get__selectedHighlightElementsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedHighlightElementsColor;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__selectedHighlightElementsColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedHighlightElementsColor = value;
}
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::PackLevelListHeaderTableCell::__get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::PackLevelListHeaderTableCell::__get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__text(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::PackLevelListHeaderTableCell::__get__bgImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::PackLevelListHeaderTableCell::__get__bgImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__bgImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bgImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::PackLevelListHeaderTableCell::__get__highlightImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::PackLevelListHeaderTableCell::__get__highlightImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__highlightImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::PackLevelListHeaderTableCell::__get__arrowImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrowImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::PackLevelListHeaderTableCell::__get__arrowImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrowImage;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__arrowImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arrowImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::PackLevelListHeaderTableCell::__get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::PackLevelListHeaderTableCell::__get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), "set_text", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PackLevelListHeaderTableCell::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                                             "get_text", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                                             "RefreshVisuals", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackLevelListHeaderTableCell* GlobalNamespace::PackLevelListHeaderTableCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PackLevelListHeaderTableCell*>());
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackLevelListHeaderTableCell::PackLevelListHeaderTableCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
