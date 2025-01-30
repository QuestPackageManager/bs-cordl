#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLeaderboardPanelItem.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLeaderboardPanelItem_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelItem.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(int32_t, ::StringW, int32_t, bool, int32_t)>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelItem::SetData)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x3baa2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelItem.set_hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelItem::*)(bool)>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3baa044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(), "set_hide",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLeaderboardPanelItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLeaderboardPanelItem::*)()>(
    &::GlobalNamespace::MultiplayerLeaderboardPanelItem::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3baa584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerNameText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____positionText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backgroundImage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prevPlayerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, playerName, score, failed, numberOfPlayers);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelItem::set_hide(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(), "set_hide",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLeaderboardPanelItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLeaderboardPanelItem* GlobalNamespace::MultiplayerLeaderboardPanelItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLeaderboardPanelItem::MultiplayerLeaderboardPanelItem() {}
