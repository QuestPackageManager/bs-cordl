#pragma once
// IWYU pragma private; include "GlobalNamespace\TextOnlyTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__TextOnlyTableCell_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextOnlyTableCell::*)()>(&::GlobalNamespace::TextOnlyTableCell::get_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a03be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)(::StringW)>(&::GlobalNamespace::TextOnlyTableCell::set_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a03c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::TextOnlyTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a03c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { ::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::TextOnlyTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a03cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { ::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell.RefreshVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)()>(&::GlobalNamespace::TextOnlyTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a03c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { "RefreshVisuals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextOnlyTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextOnlyTableCell::*)()>(&::GlobalNamespace::TextOnlyTableCell::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a03cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::TextOnlyTableCell::__cordl_internal_get__selectedHighlightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedHighlightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TextOnlyTableCell::__cordl_internal_get__selectedHighlightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedHighlightColor;
}
constexpr void GlobalNamespace::TextOnlyTableCell::__cordl_internal_set__selectedHighlightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedHighlightColor = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::TextOnlyTableCell::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::TextOnlyTableCell::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::TextOnlyTableCell::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::TextOnlyTableCell::__cordl_internal_get__bgImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::TextOnlyTableCell::__cordl_internal_get__bgImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr void GlobalNamespace::TextOnlyTableCell::__cordl_internal_set__bgImage(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bgImage = value;
}
constexpr ::UnityW<::HMUI::ImageView>& GlobalNamespace::TextOnlyTableCell::__cordl_internal_get__highlightImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr ::UnityW<::HMUI::ImageView> const& GlobalNamespace::TextOnlyTableCell::__cordl_internal_get__highlightImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr void GlobalNamespace::TextOnlyTableCell::__cordl_internal_set__highlightImage(::UnityW<::HMUI::ImageView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightImage = value;
}
inline ::StringW GlobalNamespace::TextOnlyTableCell::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::TextOnlyTableCell::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextOnlyTableCell::SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::TextOnlyTableCell::HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::TextOnlyTableCell::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { "RefreshVisuals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextOnlyTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextOnlyTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextOnlyTableCell* GlobalNamespace::TextOnlyTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextOnlyTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextOnlyTableCell::TextOnlyTableCell() {}
