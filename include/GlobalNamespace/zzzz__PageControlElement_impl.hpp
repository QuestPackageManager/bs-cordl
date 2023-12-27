#pragma once
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PageControlElement_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PageControlElement.get_rectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::GlobalNamespace::PageControlElement::*)()>(
    &::GlobalNamespace::PageControlElement::get_rectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e7fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControlElement*>::get(),
                                                                               "get_rectTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControlElement.SetSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControlElement::*)(bool)>(&::GlobalNamespace::PageControlElement::SetSelected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22e7d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControlElement*>::get(), "SetSelected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControlElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PageControlElement::*)()>(&::GlobalNamespace::PageControlElement::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22e7fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControlElement*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::RectTransform*& GlobalNamespace::PageControlElement::__get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rectTransform;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& GlobalNamespace::PageControlElement::__get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rectTransform;
}
constexpr void GlobalNamespace::PageControlElement::__set__rectTransform(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ImageView*& GlobalNamespace::PageControlElement::__get__imageView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____imageView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& GlobalNamespace::PageControlElement::__get__imageView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____imageView;
}
constexpr void GlobalNamespace::PageControlElement::__set__imageView(::HMUI::ImageView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____imageView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::PageControlElement::__get__selectedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____selectedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PageControlElement::__get__selectedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____selectedColor;
}
constexpr void GlobalNamespace::PageControlElement::__set__selectedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____selectedColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PageControlElement::__get__unselectedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unselectedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PageControlElement::__get__unselectedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unselectedColor;
}
constexpr void GlobalNamespace::PageControlElement::__set__unselectedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____unselectedColor = value;
}
inline ::UnityEngine::RectTransform* GlobalNamespace::PageControlElement::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControlElement*>::get(), "get_rectTransform",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PageControlElement::SetSelected(bool isSelected) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControlElement*>::get(), "SetSelected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isSelected);
}
inline ::GlobalNamespace::PageControlElement* GlobalNamespace::PageControlElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PageControlElement*>());
}
inline void GlobalNamespace::PageControlElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PageControlElement*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PageControlElement::PageControlElement() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
