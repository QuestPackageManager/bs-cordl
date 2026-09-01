#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayingDifficultyBeatmapRichPresenceData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayingDifficultyBeatmapRichPresenceData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IRichPresenceData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData.get_apiName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::*)()>(
    &::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::get_apiName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ffce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*>(), { "get_apiName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData.get_localizedDescription
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::*)()>(
    &::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::get_localizedDescription)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58ffcec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*>(), { "get_localizedDescription", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::*)(
    ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58ffea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData.GetDestinationLocalizedString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::GetDestinationLocalizedString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x58ffd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*>(),
                                         { "GetDestinationLocalizedString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_get__apiName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apiName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_get__apiName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____apiName_k__BackingField;
}
constexpr void GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_set__apiName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____apiName_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_get__localizedDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription;
}
constexpr ::StringW const& GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_get__localizedDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizedDescription;
}
constexpr void GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_set__localizedDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localizedDescription = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_get__beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_get__beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey;
}
constexpr void GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_set__beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_get__beatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_get__beatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel;
}
constexpr void GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::__cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevel = value;
}
inline ::StringW GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::get_apiName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*>(), { "get_apiName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::get_localizedDescription() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*>(), { "get_localizedDescription", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey, beatmapLevel);
}
inline ::StringW GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::GetDestinationLocalizedString(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                                                          ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*>(),
                                       { "GetDestinationLocalizedString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, beatmapKey, beatmapLevel);
}
inline ::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData* GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::New_ctor(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                                                                                        ::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*>(beatmapKey, beatmapLevel));
}
/// @brief Convert operator to "::GlobalNamespace::IRichPresenceData"
constexpr GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::operator ::GlobalNamespace::IRichPresenceData*() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRichPresenceData"
constexpr ::GlobalNamespace::IRichPresenceData* GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::i___GlobalNamespace__IRichPresenceData() noexcept {
  return static_cast<::GlobalNamespace::IRichPresenceData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::PlayingDifficultyBeatmapRichPresenceData() {}
