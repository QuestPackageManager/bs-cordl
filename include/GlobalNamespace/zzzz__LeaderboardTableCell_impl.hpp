#pragma once
// IWYU pragma private; include "GlobalNamespace\LeaderboardTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardTableCell_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableCell.set_rank
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableCell::*)(int32_t)>(&::GlobalNamespace::LeaderboardTableCell::set_rank)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5922ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_rank", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableCell.get_playerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LeaderboardTableCell::*)()>(&::GlobalNamespace::LeaderboardTableCell::get_playerName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5922b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "get_playerName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableCell.set_playerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableCell::*)(::StringW)>(&::GlobalNamespace::LeaderboardTableCell::set_playerName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5922b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_playerName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableCell.set_score
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableCell::*)(int32_t)>(&::GlobalNamespace::LeaderboardTableCell::set_score)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5922bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_score", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableCell.set_showSeparator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableCell::*)(bool)>(&::GlobalNamespace::LeaderboardTableCell::set_showSeparator)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5922c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_showSeparator", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableCell.set_showFullCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableCell::*)(bool)>(&::GlobalNamespace::LeaderboardTableCell::set_showFullCombo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5922c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_showFullCombo", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableCell.set_specialScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableCell::*)(bool)>(&::GlobalNamespace::LeaderboardTableCell::set_specialScore)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5922c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_specialScore", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardTableCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardTableCell::*)()>(&::GlobalNamespace::LeaderboardTableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5922d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__rankText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__rankText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankText;
}
constexpr void GlobalNamespace::LeaderboardTableCell::__cordl_internal_set__rankText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rankText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__playerNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__playerNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr void GlobalNamespace::LeaderboardTableCell::__cordl_internal_set__playerNameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerNameText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__scoreText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__scoreText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr void GlobalNamespace::LeaderboardTableCell::__cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__fullComboText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__fullComboText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboText;
}
constexpr void GlobalNamespace::LeaderboardTableCell::__cordl_internal_set__fullComboText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullComboText = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__normalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__normalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalColor;
}
constexpr void GlobalNamespace::LeaderboardTableCell::__cordl_internal_set__normalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__specialScoreColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialScoreColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__specialScoreColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____specialScoreColor;
}
constexpr void GlobalNamespace::LeaderboardTableCell::__cordl_internal_set__specialScoreColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____specialScoreColor = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__separatorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separatorImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::LeaderboardTableCell::__cordl_internal_get__separatorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separatorImage;
}
constexpr void GlobalNamespace::LeaderboardTableCell::__cordl_internal_set__separatorImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____separatorImage = value;
}
inline void GlobalNamespace::LeaderboardTableCell::set_rank(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_rank", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::LeaderboardTableCell::get_playerName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "get_playerName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardTableCell::set_playerName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_playerName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardTableCell::set_score(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_score", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardTableCell::set_showSeparator(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_showSeparator", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardTableCell::set_showFullCombo(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_showFullCombo", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardTableCell::set_specialScore(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { "set_specialScore", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardTableCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardTableCell* GlobalNamespace::LeaderboardTableCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardTableCell::LeaderboardTableCell() {}
