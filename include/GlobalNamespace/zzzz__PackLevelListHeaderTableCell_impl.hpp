#pragma once
// IWYU pragma private; include "GlobalNamespace/PackLevelListHeaderTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__PackLevelListHeaderTableCell_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::StringW)>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::set_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3bfb03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), "set_text",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::get_text)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3bfb060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                                               "get_text", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bfb084;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3bfb110;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell.RefreshVisuals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3bfb088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                                               "RefreshVisuals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackLevelListHeaderTableCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PackLevelListHeaderTableCell::*)()>(
    &::GlobalNamespace::PackLevelListHeaderTableCell::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3bfb114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__selectedHighlightElementsColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedHighlightElementsColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__selectedHighlightElementsColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedHighlightElementsColor;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_set__selectedHighlightElementsColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedHighlightElementsColor = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__bgImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__bgImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bgImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__highlightImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__highlightImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__arrowImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrowImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__arrowImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrowImage;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_set__arrowImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arrowImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::PackLevelListHeaderTableCell::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PackLevelListHeaderTableCell::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                                             "get_text", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(),
                                                                             "RefreshVisuals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PackLevelListHeaderTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PackLevelListHeaderTableCell*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PackLevelListHeaderTableCell* GlobalNamespace::PackLevelListHeaderTableCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PackLevelListHeaderTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackLevelListHeaderTableCell::PackLevelListHeaderTableCell() {}
