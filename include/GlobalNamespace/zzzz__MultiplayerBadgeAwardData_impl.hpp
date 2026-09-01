#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerBadgeAwardData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeAwardData.get_awardedPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::MultiplayerBadgeAwardData::*)()>(
    &::GlobalNamespace::MultiplayerBadgeAwardData::get_awardedPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_awardedPlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeAwardData.get_titleLocalizationKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerBadgeAwardData::*)()>(&::GlobalNamespace::MultiplayerBadgeAwardData::get_titleLocalizationKey)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3735260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_titleLocalizationKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeAwardData.get_title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerBadgeAwardData::*)()>(&::GlobalNamespace::MultiplayerBadgeAwardData::get_title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_title", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeAwardData.get_subtitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerBadgeAwardData::*)()>(&::GlobalNamespace::MultiplayerBadgeAwardData::get_subtitle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_subtitle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeAwardData.get_icon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::MultiplayerBadgeAwardData::*)()>(&::GlobalNamespace::MultiplayerBadgeAwardData::get_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_icon", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeAwardData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgeAwardData::*)(
    ::GlobalNamespace::IBeatSaberConnectedPlayer*, float_t, ::StringW, ::StringW, ::GlobalNamespace::MultiplayerBadgeDataSO*)>(&::GlobalNamespace::MultiplayerBadgeAwardData::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x37335b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerBadgeDataSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeAwardData.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerBadgeAwardData::*)(::System::Object*)>(&::GlobalNamespace::MultiplayerBadgeAwardData::CompareTo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3735290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__awardedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____awardedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__awardedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____awardedPlayer;
}
constexpr void GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_set__awardedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____awardedPlayer = value;
}
constexpr float_t& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weight;
}
constexpr float_t const& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weight;
}
constexpr void GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_set__weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____weight = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr void GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_set__title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____title = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__subtitle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtitle;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__subtitle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtitle;
}
constexpr void GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_set__subtitle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subtitle = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr void GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_set__icon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____icon = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO>& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__badgeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeData;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO> const& GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_get__badgeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeData;
}
constexpr void GlobalNamespace::MultiplayerBadgeAwardData::__cordl_internal_set__badgeData(::UnityW<::GlobalNamespace::MultiplayerBadgeDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badgeData = value;
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerBadgeAwardData::get_awardedPlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_awardedPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerBadgeAwardData::get_titleLocalizationKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_titleLocalizationKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerBadgeAwardData::get_title() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_title", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerBadgeAwardData::get_subtitle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_subtitle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::MultiplayerBadgeAwardData::get_icon() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "get_icon", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerBadgeAwardData::_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* awardedPlayer, float_t weight, ::StringW title, ::StringW subtitle,
                                                              ::GlobalNamespace::MultiplayerBadgeDataSO* badgeData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerBadgeDataSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, awardedPlayer, weight, title, subtitle, badgeData);
}
inline int32_t GlobalNamespace::MultiplayerBadgeAwardData::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeAwardData*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData* GlobalNamespace::MultiplayerBadgeAwardData::New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* awardedPlayer, float_t weight, ::StringW title,
                                                                                                          ::StringW subtitle, ::GlobalNamespace::MultiplayerBadgeDataSO* badgeData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgeAwardData*>(awardedPlayer, weight, title, subtitle, badgeData));
}
/// @brief Convert operator to "::System::IComparable"
constexpr GlobalNamespace::MultiplayerBadgeAwardData::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* GlobalNamespace::MultiplayerBadgeAwardData::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeAwardData::MultiplayerBadgeAwardData() {}
