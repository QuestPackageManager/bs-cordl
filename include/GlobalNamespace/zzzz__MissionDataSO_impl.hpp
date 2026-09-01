#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionDataSO.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MissionDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MissionHelpSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionDataSO.get_songName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MissionDataSO::*)()>(&::GlobalNamespace::MissionDataSO::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37562e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_songName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionDataSO.get_missionObjectives
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::MissionObjective*> (::GlobalNamespace::MissionDataSO::*)()>(
    &::GlobalNamespace::MissionDataSO::get_missionObjectives)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37562e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_missionObjectives", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionDataSO.get_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::MissionDataSO::*)()>(&::GlobalNamespace::MissionDataSO::get_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37562f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_beatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionDataSO.get_beatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::MissionDataSO::*)()>(
    &::GlobalNamespace::MissionDataSO::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37562fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_beatmapCharacteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionDataSO.get_beatmapDifficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::MissionDataSO::*)()>(&::GlobalNamespace::MissionDataSO::get_beatmapDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_beatmapDifficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionDataSO.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::MissionDataSO::*)()>(&::GlobalNamespace::MissionDataSO::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375630c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionDataSO.get_missionHelp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MissionHelpSO> (::GlobalNamespace::MissionDataSO::*)()>(&::GlobalNamespace::MissionDataSO::get_missionHelp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3756314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_missionHelp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionDataSO::*)()>(&::GlobalNamespace::MissionDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375631c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MissionDataSO::__cordl_internal_get__levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr ::StringW const& GlobalNamespace::MissionDataSO::__cordl_internal_get__levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelId;
}
constexpr void GlobalNamespace::MissionDataSO::__cordl_internal_set__levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelId = value;
}
constexpr ::StringW& GlobalNamespace::MissionDataSO::__cordl_internal_get__songName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr ::StringW const& GlobalNamespace::MissionDataSO::__cordl_internal_get__songName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr void GlobalNamespace::MissionDataSO::__cordl_internal_set__songName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songName = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic& GlobalNamespace::MissionDataSO::__cordl_internal_get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic const& GlobalNamespace::MissionDataSO::__cordl_internal_get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::MissionDataSO::__cordl_internal_set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristic = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::MissionDataSO::__cordl_internal_get__beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::MissionDataSO::__cordl_internal_get__beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulty;
}
constexpr void GlobalNamespace::MissionDataSO::__cordl_internal_set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapDifficulty = value;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*>& GlobalNamespace::MissionDataSO::__cordl_internal_get__missionObjectives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectives;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjective*> const& GlobalNamespace::MissionDataSO::__cordl_internal_get__missionObjectives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectives;
}
constexpr void GlobalNamespace::MissionDataSO::__cordl_internal_set__missionObjectives(::ArrayW<::GlobalNamespace::MissionObjective*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectives = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::MissionDataSO::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::MissionDataSO::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::MissionDataSO::__cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionHelpSO>& GlobalNamespace::MissionDataSO::__cordl_internal_get__missionHelp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelp;
}
constexpr ::UnityW<::GlobalNamespace::MissionHelpSO> const& GlobalNamespace::MissionDataSO::__cordl_internal_get__missionHelp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionHelp;
}
constexpr void GlobalNamespace::MissionDataSO::__cordl_internal_set__missionHelp(::UnityW<::GlobalNamespace::MissionHelpSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionHelp = value;
}
inline ::StringW GlobalNamespace::MissionDataSO::get_songName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_songName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::MissionObjective*> GlobalNamespace::MissionDataSO::get_missionObjectives() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_missionObjectives", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::MissionObjective*>>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::MissionDataSO::get_beatmapKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_beatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::MissionDataSO::get_beatmapCharacteristic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_beatmapCharacteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::MissionDataSO::get_beatmapDifficulty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_beatmapDifficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::MissionDataSO::get_gameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MissionHelpSO> GlobalNamespace::MissionDataSO::get_missionHelp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { "get_missionHelp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MissionHelpSO>>(this, ___internal_method);
}
inline void GlobalNamespace::MissionDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionDataSO* GlobalNamespace::MissionDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionDataSO::MissionDataSO() {}
