#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__DifficultyTableCell_def.hpp"
#include "GlobalNamespace/zzzz__FillIndicator_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.set_difficultyText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)(::StringW)>(
    &::GlobalNamespace::DifficultyTableCell::set_difficultyText)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22788c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), "set_difficultyText",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.get_difficultyText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::DifficultyTableCell::*)()>(
    &::GlobalNamespace::DifficultyTableCell::get_difficultyText)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22788ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(),
                                                                               "get_difficultyText", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.set_difficultyValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)(int32_t)>(
    &::GlobalNamespace::DifficultyTableCell::set_difficultyValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2278910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), "set_difficultyValue",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(
    &::GlobalNamespace::DifficultyTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x227898c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)(::HMUI::__SelectableCell__TransitionType)>(
    &::GlobalNamespace::DifficultyTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2278a30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)()>(&::GlobalNamespace::DifficultyTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2278a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::TMPro::TextMeshProUGUI*& GlobalNamespace::DifficultyTableCell::__get__difficultyText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyText;
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& GlobalNamespace::DifficultyTableCell::__get__difficultyText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyText;
}
constexpr void GlobalNamespace::DifficultyTableCell::__set__difficultyText(::TMPro::TextMeshProUGUI* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::DifficultyTableCell::__get__bgImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::DifficultyTableCell::__get__bgImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr void GlobalNamespace::DifficultyTableCell::__set__bgImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bgImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image*& GlobalNamespace::DifficultyTableCell::__get__highlightImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& GlobalNamespace::DifficultyTableCell::__get__highlightImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr void GlobalNamespace::DifficultyTableCell::__set__highlightImage(::UnityEngine::UI::Image* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FillIndicator*& GlobalNamespace::DifficultyTableCell::__get__fillIndicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fillIndicator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FillIndicator*> const& GlobalNamespace::DifficultyTableCell::__get__fillIndicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fillIndicator;
}
constexpr void GlobalNamespace::DifficultyTableCell::__set__fillIndicator(::GlobalNamespace::FillIndicator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fillIndicator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DifficultyTableCell::set_difficultyText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), "set_difficultyText",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::DifficultyTableCell::get_difficultyText() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(),
                                                                             "get_difficultyText", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::DifficultyTableCell::set_difficultyValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), "set_difficultyValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::DifficultyTableCell::SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::DifficultyTableCell::HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transitionType);
}
inline ::GlobalNamespace::DifficultyTableCell* GlobalNamespace::DifficultyTableCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DifficultyTableCell*>());
}
inline void GlobalNamespace::DifficultyTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyTableCell*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DifficultyTableCell::DifficultyTableCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
