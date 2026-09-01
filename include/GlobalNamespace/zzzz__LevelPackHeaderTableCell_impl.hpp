#pragma once
// IWYU pragma private; include "GlobalNamespace\LevelPackHeaderTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__LevelPackHeaderTableCell_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)(::StringW)>(&::GlobalNamespace::LevelPackHeaderTableCell::SetData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a030b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), { "SetData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::LevelPackHeaderTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a030d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), { ::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::LevelPackHeaderTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a03174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), { ::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell.RefreshVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)()>(&::GlobalNamespace::LevelPackHeaderTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a030d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), { "RefreshVisuals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelPackHeaderTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LevelPackHeaderTableCell::*)()>(&::GlobalNamespace::LevelPackHeaderTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a03178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__nameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__nameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nameText;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__nameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nameText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__backgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__backgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__backgroundImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundImage = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__highlightBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__highlightBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightBackgroundColor;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__highlightBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__selectedBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__selectedBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedBackgroundColor;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__selectedBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__selectedAndHighlightedBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_get__selectedAndHighlightedBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedBackgroundColor;
}
constexpr void GlobalNamespace::LevelPackHeaderTableCell::__cordl_internal_set__selectedAndHighlightedBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedBackgroundColor = value;
}
inline void GlobalNamespace::LevelPackHeaderTableCell::SetData(::StringW headerText) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), { "SetData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headerText);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), { "RefreshVisuals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LevelPackHeaderTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LevelPackHeaderTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelPackHeaderTableCell* GlobalNamespace::LevelPackHeaderTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LevelPackHeaderTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelPackHeaderTableCell::LevelPackHeaderTableCell() {}
