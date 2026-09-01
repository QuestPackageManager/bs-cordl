#pragma once
// IWYU pragma private; include "GlobalNamespace\PageControlElement.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PageControlElement_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PageControlElement.get_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::GlobalNamespace::PageControlElement::*)()>(
    &::GlobalNamespace::PageControlElement::get_rectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596ef14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControlElement*>(), { "get_rectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControlElement.SetSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageControlElement::*)(bool)>(&::GlobalNamespace::PageControlElement::SetSelected)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x596edac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControlElement*>(), { "SetSelected", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PageControlElement._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PageControlElement::*)()>(&::GlobalNamespace::PageControlElement::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x596ef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControlElement*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::PageControlElement::__cordl_internal_get__rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::PageControlElement::__cordl_internal_get__rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectTransform;
}
constexpr void GlobalNamespace::PageControlElement::__cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rectTransform = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::PageControlElement::__cordl_internal_get__imageView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageView;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::PageControlElement::__cordl_internal_get__imageView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imageView;
}
constexpr void GlobalNamespace::PageControlElement::__cordl_internal_set__imageView(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____imageView = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PageControlElement::__cordl_internal_get__selectedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PageControlElement::__cordl_internal_get__selectedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColor;
}
constexpr void GlobalNamespace::PageControlElement::__cordl_internal_set__selectedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PageControlElement::__cordl_internal_get__unselectedColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unselectedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PageControlElement::__cordl_internal_get__unselectedColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unselectedColor;
}
constexpr void GlobalNamespace::PageControlElement::__cordl_internal_set__unselectedColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unselectedColor = value;
}
inline ::UnityW<::UnityEngine::RectTransform> GlobalNamespace::PageControlElement::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControlElement*>(), { "get_rectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline void GlobalNamespace::PageControlElement::SetSelected(bool isSelected) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControlElement*>(), { "SetSelected", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isSelected);
}
inline void GlobalNamespace::PageControlElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PageControlElement*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PageControlElement* GlobalNamespace::PageControlElement::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PageControlElement*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PageControlElement::PageControlElement() {}
