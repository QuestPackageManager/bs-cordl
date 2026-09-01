#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerBadgeDataSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.get_icon
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSO::get_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), { "get_icon", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.get_titleLocalizationKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSO::get_titleLocalizationKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), { "get_titleLocalizationKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.get_subtitleLocalizationKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSO::get_subtitleLocalizationKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3735238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), { "get_subtitleLocalizationKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.CalculateBadgeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::GlobalNamespace::PlayerDataModel*,
                                                  ::by_ref<::GlobalNamespace::BeatmapKey>, float_t)>(&::GlobalNamespace::MultiplayerBadgeDataSO::CalculateBadgeData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37335e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MultiplayerBadgeDataSO::__cordl_internal_get__titleLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerBadgeDataSO::__cordl_internal_get__titleLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____titleLocalizationKey;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataSO::__cordl_internal_set__titleLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____titleLocalizationKey = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerBadgeDataSO::__cordl_internal_get__subtitleLocalizationKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtitleLocalizationKey;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerBadgeDataSO::__cordl_internal_get__subtitleLocalizationKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subtitleLocalizationKey;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataSO::__cordl_internal_set__subtitleLocalizationKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subtitleLocalizationKey = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::MultiplayerBadgeDataSO::__cordl_internal_get__icon() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::MultiplayerBadgeDataSO::__cordl_internal_get__icon() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____icon;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataSO::__cordl_internal_set__icon(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____icon = value;
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::MultiplayerBadgeDataSO::get_icon() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), { "get_icon", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerBadgeDataSO::get_titleLocalizationKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), { "get_titleLocalizationKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerBadgeDataSO::get_subtitleLocalizationKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), { "get_subtitleLocalizationKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataSO::CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                            ::GlobalNamespace::PlayerDataModel* playerDataModel, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, float_t randomMultiplier) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*>(this, ___internal_method, resultsData, playerDataModel, beatmapKey, randomMultiplier);
}
inline void GlobalNamespace::MultiplayerBadgeDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeDataSO* GlobalNamespace::MultiplayerBadgeDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgeDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataSO::MultiplayerBadgeDataSO() {}
