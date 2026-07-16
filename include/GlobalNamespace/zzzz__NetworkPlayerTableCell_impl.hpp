#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkPlayerTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerTableCell_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerTableCell.get_showSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NetworkPlayerTableCell::*)()>(&::GlobalNamespace::NetworkPlayerTableCell::get_showSeparator)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a0d3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { "get_showSeparator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerTableCell.set_showSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerTableCell::*)(bool)>(&::GlobalNamespace::NetworkPlayerTableCell::set_showSeparator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a0c8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { "set_showSeparator", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerTableCell.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerTableCell::*)(::StringW, bool, bool, bool, bool)>(&::GlobalNamespace::NetworkPlayerTableCell::SetData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a0c810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(),
                                                { "SetData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerTableCell.SelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::NetworkPlayerTableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0d5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerTableCell.HighlightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerTableCell::*)(::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::NetworkPlayerTableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a0d5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { ::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerTableCell.RefreshVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerTableCell::*)()>(&::GlobalNamespace::NetworkPlayerTableCell::RefreshVisuals)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5a0d3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { "RefreshVisuals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerTableCell.get_activeColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::NetworkPlayerTableCell::*)()>(&::GlobalNamespace::NetworkPlayerTableCell::get_activeColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a0d5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { "get_activeColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NetworkPlayerTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NetworkPlayerTableCell::*)()>(&::GlobalNamespace::NetworkPlayerTableCell::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a0d660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__playerNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__playerNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__playerNameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerNameText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__separator(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____separator = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__privateIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privateIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__privateIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privateIcon;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__privateIcon(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____privateIcon = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__spectateIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectateIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__spectateIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spectateIcon;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__spectateIcon(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spectateIcon = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__partyLeaderIcon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyLeaderIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__partyLeaderIcon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyLeaderIcon;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__partyLeaderIcon(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partyLeaderIcon = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__bgImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__bgImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bgImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__highlightImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__highlightImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightImage;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__highlightImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightImage = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__textColorNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textColorNormal;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__textColorNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textColorNormal;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__textColorNormal(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textColorNormal = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__textColorMe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textColorMe;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__textColorMe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textColorMe;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__textColorMe(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textColorMe = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__textColorSelected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textColorSelected;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__textColorSelected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textColorSelected;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__textColorSelected(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textColorSelected = value;
}
constexpr bool& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__isMe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe;
}
constexpr bool const& GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_get__isMe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe;
}
constexpr void GlobalNamespace::NetworkPlayerTableCell::__cordl_internal_set__isMe(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMe = value;
}
inline bool GlobalNamespace::NetworkPlayerTableCell::get_showSeparator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { "get_showSeparator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerTableCell::set_showSeparator(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { "set_showSeparator", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NetworkPlayerTableCell::SetData(::StringW userName, bool isOpenParty, bool wantsToPlayNextLevel, bool isMyPartyOwner, bool isMe) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(),
                                              { "SetData", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userName, isOpenParty, wantsToPlayNextLevel, isMyPartyOwner, isMe);
}
inline void GlobalNamespace::NetworkPlayerTableCell::SelectionDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::NetworkPlayerTableCell::HighlightDidChange(::HMUI::SelectableCell_TransitionType transitionType) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transitionType);
}
inline void GlobalNamespace::NetworkPlayerTableCell::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { "RefreshVisuals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::NetworkPlayerTableCell::get_activeColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { "get_activeColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::NetworkPlayerTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NetworkPlayerTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetworkPlayerTableCell* GlobalNamespace::NetworkPlayerTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NetworkPlayerTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkPlayerTableCell::NetworkPlayerTableCell() {}
