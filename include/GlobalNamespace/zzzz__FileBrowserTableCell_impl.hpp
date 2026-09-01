#pragma once
// IWYU pragma private; include "GlobalNamespace\FileBrowserTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__FileBrowserTableCell_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableCell::*)(::StringW)>(&::GlobalNamespace::FileBrowserTableCell::set_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5923f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::FileBrowserTableCell::*)()>(&::GlobalNamespace::FileBrowserTableCell::get_text)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5923f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::FileBrowserTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5923f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), { ::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::FileBrowserTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5923fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), { ::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableCell::*)()>(&::GlobalNamespace::FileBrowserTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592402c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::FileBrowserTableCell::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::FileBrowserTableCell::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::FileBrowserTableCell::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::FileBrowserTableCell::__cordl_internal_get__bgImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::FileBrowserTableCell::__cordl_internal_get__bgImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr void GlobalNamespace::FileBrowserTableCell::__cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bgImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::FileBrowserTableCell::__cordl_internal_get__highlightImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::FileBrowserTableCell::__cordl_internal_get__highlightImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr void GlobalNamespace::FileBrowserTableCell::__cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightImage = value;
}
inline void GlobalNamespace::FileBrowserTableCell::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::FileBrowserTableCell::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::FileBrowserTableCell::SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::FileBrowserTableCell::HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::FileBrowserTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FileBrowserTableCell* GlobalNamespace::FileBrowserTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileBrowserTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileBrowserTableCell::FileBrowserTableCell() {}
