#pragma once
// IWYU pragma private; include "GlobalNamespace\DifficultyTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__DifficultyTableCell_def.hpp"
#include "GlobalNamespace/zzzz__FillIndicator_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.set_difficultyText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)(::StringW)>(&::GlobalNamespace::DifficultyTableCell::set_difficultyText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5922920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { "set_difficultyText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.get_difficultyText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::DifficultyTableCell::*)()>(&::GlobalNamespace::DifficultyTableCell::get_difficultyText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5922940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { "get_difficultyText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.set_difficultyValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)(int32_t)>(&::GlobalNamespace::DifficultyTableCell::set_difficultyValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5922960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { "set_difficultyValue", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::DifficultyTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59229dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { ::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::DifficultyTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5922a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { ::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DifficultyTableCell::*)()>(&::GlobalNamespace::DifficultyTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5922ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::DifficultyTableCell::__cordl_internal_get__difficultyText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::DifficultyTableCell::__cordl_internal_get__difficultyText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyText;
}
constexpr void GlobalNamespace::DifficultyTableCell::__cordl_internal_set__difficultyText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::DifficultyTableCell::__cordl_internal_get__bgImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::DifficultyTableCell::__cordl_internal_get__bgImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr void GlobalNamespace::DifficultyTableCell::__cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bgImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::DifficultyTableCell::__cordl_internal_get__highlightImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::DifficultyTableCell::__cordl_internal_get__highlightImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr void GlobalNamespace::DifficultyTableCell::__cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightImage = value;
}
constexpr ::UnityW<::GlobalNamespace::FillIndicator>& GlobalNamespace::DifficultyTableCell::__cordl_internal_get__fillIndicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fillIndicator;
}
constexpr ::UnityW<::GlobalNamespace::FillIndicator> const& GlobalNamespace::DifficultyTableCell::__cordl_internal_get__fillIndicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fillIndicator;
}
constexpr void GlobalNamespace::DifficultyTableCell::__cordl_internal_set__fillIndicator(::UnityW<::GlobalNamespace::FillIndicator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fillIndicator = value;
}
inline void GlobalNamespace::DifficultyTableCell::set_difficultyText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { "set_difficultyText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::DifficultyTableCell::get_difficultyText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { "get_difficultyText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::DifficultyTableCell::set_difficultyValue(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { "set_difficultyValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DifficultyTableCell::SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::DifficultyTableCell::HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::DifficultyTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DifficultyTableCell* GlobalNamespace::DifficultyTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DifficultyTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DifficultyTableCell::DifficultyTableCell() {}
