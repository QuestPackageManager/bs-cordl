#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLeaderboardPanelItem.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelItem_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelItem.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(int32_t, ::StringW, int32_t, bool, int32_t)>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelItem::SetData)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x59ac7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>(),
                                         { "SetData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelItem.set_hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(bool)>(&::GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59ac584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>(), { "set_hide", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelItem::*)()>(&::GlobalNamespace::MultiplayerLeaderboardPanelItem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59acab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__playerNameText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__playerNameText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerNameText;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__playerNameText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerNameText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__scoreText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__scoreText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreText;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__positionText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__positionText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionText;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__positionText(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__backgroundImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__backgroundImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundImage;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__backgroundImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundImage = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__normalPlayerTextColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalPlayerTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__normalPlayerTextColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalPlayerTextColor;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__normalPlayerTextColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalPlayerTextColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__failedPlayerTextColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedPlayerTextColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__failedPlayerTextColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedPlayerTextColor;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__failedPlayerTextColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failedPlayerTextColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__firstPlayerBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__firstPlayerBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayerBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__firstPlayerBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstPlayerBackgroundColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__lastPlayerBackgroundColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPlayerBackgroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__lastPlayerBackgroundColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPlayerBackgroundColor;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__lastPlayerBackgroundColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPlayerBackgroundColor = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosition;
}
constexpr int32_t const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPosition;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__prevPosition(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevPosition = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevPlayerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPlayerName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevPlayerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevPlayerName;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__prevPlayerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevPlayerName = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevScore;
}
constexpr int32_t const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevScore;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__prevScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevScore = value;
}
constexpr bool& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevFailed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevFailed;
}
constexpr bool const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevFailed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevFailed;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__prevFailed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevFailed = value;
}
constexpr int32_t& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevNumberOfPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNumberOfPlayers;
}
constexpr int32_t const& GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_get__prevNumberOfPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNumberOfPlayers;
}
constexpr void GlobalNamespace::MultiplayerLeaderboardPanelItem::__cordl_internal_set__prevNumberOfPlayers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevNumberOfPlayers = value;
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelItem::SetData(int32_t position, ::StringW playerName, int32_t score, bool failed, int32_t numberOfPlayers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>(),
                                       { "SetData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, playerName, score, failed, numberOfPlayers);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>(), { "set_hide", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLeaderboardPanelItem* GlobalNamespace::MultiplayerLeaderboardPanelItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLeaderboardPanelItem::MultiplayerLeaderboardPanelItem() {}
