#pragma once
// IWYU pragma private; include "GlobalNamespace\LeaderboardScoreUploader.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_playerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(&::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_playerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_playerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(uint64_t)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_playerId", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37576b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_beatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_beatmapKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(),
                                                                                           { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_multipliedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_multipliedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_multipliedScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_multipliedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(int32_t)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_multipliedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_multipliedScore", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_modifiedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_modifiedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_modifiedScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_modifiedScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(int32_t)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_modifiedScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_modifiedScore", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_fullCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(&::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_fullCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37576fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_fullCombo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_fullCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(bool)>(&::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_fullCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3757704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_fullCombo", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_goodCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_goodCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375770c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_goodCutsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_goodCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(int32_t)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_goodCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3757714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_goodCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_badCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_badCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375771c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_badCutsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_badCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(int32_t)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_badCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3757724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_badCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_missedCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(&::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_missedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375772c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_missedCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_missedCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(int32_t)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_missedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3757734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_missedCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.get_maxCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)()>(&::GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_maxCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x375773c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_maxCombo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData.set_maxCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(int32_t)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_maxCombo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3757744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_maxCombo", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoreData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoreData::*)(uint64_t, ::by_ref<::GlobalNamespace::BeatmapKey>, int32_t, int32_t, bool,
                                                                                                                       int32_t, int32_t, int32_t, int32_t, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoreData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x375774c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
constexpr uint64_t& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__playerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId_k__BackingField;
}
constexpr uint64_t const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__playerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__playerId_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerId_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__beatmapKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__beatmapKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__gameplayModifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__gameplayModifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__multipliedScore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipliedScore_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__multipliedScore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multipliedScore_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__multipliedScore_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multipliedScore_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__modifiedScore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiedScore_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__modifiedScore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiedScore_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__modifiedScore_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiedScore_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__fullCombo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo_k__BackingField;
}
constexpr bool const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__fullCombo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__fullCombo_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullCombo_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__goodCutsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__goodCutsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutsCount_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__goodCutsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____goodCutsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__badCutsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__badCutsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutsCount_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__badCutsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badCutsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__missedCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__missedCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedCount_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__missedCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missedCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__maxCombo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCombo_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get__maxCombo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCombo_k__BackingField;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set__maxCombo_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxCombo_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get_uploadAttemptCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uploadAttemptCount;
}
constexpr int32_t const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get_uploadAttemptCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uploadAttemptCount;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set_uploadAttemptCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___uploadAttemptCount = value;
}
constexpr int32_t& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get_currentUploadAttemptCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentUploadAttemptCount;
}
constexpr int32_t const& GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_get_currentUploadAttemptCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentUploadAttemptCount;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader_ScoreData::__cordl_internal_set_currentUploadAttemptCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentUploadAttemptCount = value;
}
inline uint64_t GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_playerId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_playerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_playerId(uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_playerId", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_beatmapKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_beatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_gameplayModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(),
                                                                                         { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_multipliedScore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_multipliedScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_multipliedScore(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_multipliedScore", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_modifiedScore() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_modifiedScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_modifiedScore(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_modifiedScore", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_fullCombo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_fullCombo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_fullCombo(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_fullCombo", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_goodCutsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_goodCutsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_goodCutsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_goodCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_badCutsCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_badCutsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_badCutsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_badCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_missedCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_missedCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_missedCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_missedCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::LeaderboardScoreUploader_ScoreData::get_maxCombo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "get_maxCombo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::set_maxCombo(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(), { "set_maxCombo", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoreData::_ctor(uint64_t playerId, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t multipliedScore, int32_t modifiedScore,
                                                                       bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t maxCombo,
                                                                       ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, beatmapKey, multipliedScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo,
                                                   gameplayModifiers);
}
inline ::GlobalNamespace::LeaderboardScoreUploader_ScoreData* GlobalNamespace::LeaderboardScoreUploader_ScoreData::New_ctor(uint64_t playerId, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                                                                            int32_t multipliedScore, int32_t modifiedScore, bool fullCombo,
                                                                                                                            int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount,
                                                                                                                            int32_t maxCombo, ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(playerId, beatmapKey, multipliedScore, modifiedScore, fullCombo, goodCutsCount,
                                                                                                                  badCutsCount, missedCount, maxCombo, gameplayModifiers));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardScoreUploader_ScoreData::LeaderboardScoreUploader_ScoreData() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3757784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>*& GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData::__cordl_internal_get_scores() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scores;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* const&
GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData::__cordl_internal_get_scores() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scores;
}
constexpr void
GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData::__cordl_internal_set_scores(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scores = value;
}
inline void GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData* GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardScoreUploader_ScoresToUploadData::LeaderboardScoreUploader_ScoresToUploadData() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3757788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::*)(::GlobalNamespace::LeaderboardScoreUploader_ScoreData*,
                                                                                                                        ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*)>(
        &::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x37578d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::*)(::GlobalNamespace::LeaderboardScoreUploader_ScoreData*,
                                                                        ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x37578e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x375790c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::Invoke(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                                      ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, scoreData, completionHandler);
}
inline ::System::IAsyncResult* GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::BeginInvoke(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                                                                          ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler,
                                                                                                          ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, scoreData, completionHandler, callback, object);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, result);
}
inline ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback::LeaderboardScoreUploader_UploadScoreCallback() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3757918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0._UploadScoresCoroutine_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::*)(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult)>(
    &::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::_UploadScoresCoroutine_b__0)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x375791c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0*>(),
                                                             { "<UploadScoresCoroutine>b__0", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LeaderboardScoreUploader_ScoreData*& GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::__cordl_internal_get_scoreData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoreData;
}
constexpr ::GlobalNamespace::LeaderboardScoreUploader_ScoreData* const& GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::__cordl_internal_get_scoreData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scoreData;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::__cordl_internal_set_scoreData(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scoreData = value;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::_UploadScoresCoroutine_b__0(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0*>(),
                                                           { "<UploadScoresCoroutine>b__0", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0* GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardScoreUploader___c__DisplayClass16_0::LeaderboardScoreUploader___c__DisplayClass16_0() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x3757b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3758140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LeaderboardScoreUploader>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17::LeaderboardScoreUploader__LoadScoresToUploadFromFile_d__17() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x37581ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3758624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LeaderboardScoreUploader>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18::LeaderboardScoreUploader__SaveScoresToUploadToFile_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::*)(int32_t)>(
    &::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37573bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x375862c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x3758630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3758890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3758898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37588d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16* GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardScoreUploader__UploadScoresCoroutine_d__16::LeaderboardScoreUploader__UploadScoresCoroutine_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.add_allScoresDidUploadEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)(::System::Action*)>(
    &::GlobalNamespace::LeaderboardScoreUploader::add_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3757130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "add_allScoresDidUploadEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.remove_allScoresDidUploadEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)(::System::Action*)>(
    &::GlobalNamespace::LeaderboardScoreUploader::remove_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x37571dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "remove_allScoresDidUploadEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)(::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*, uint64_t)>(
    &::GlobalNamespace::LeaderboardScoreUploader::Init)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3757288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(),
                                                             { "Init", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.Uninitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)()>(&::GlobalNamespace::LeaderboardScoreUploader::Uninitialize)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x375730c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "Uninitialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.OnApplicationQuit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)()>(&::GlobalNamespace::LeaderboardScoreUploader::OnApplicationQuit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37573b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "OnApplicationQuit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.UploadScoresCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LeaderboardScoreUploader::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader::UploadScoresCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x37572b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "UploadScoresCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.LoadScoresToUploadFromFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LeaderboardScoreUploader::*)()>(
    &::GlobalNamespace::LeaderboardScoreUploader::LoadScoresToUploadFromFile)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x37573c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "LoadScoresToUploadFromFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.SaveScoresToUploadToFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)()>(&::GlobalNamespace::LeaderboardScoreUploader::SaveScoresToUploadToFile)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3757474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "SaveScoresToUploadToFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader.AddScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)(::GlobalNamespace::LeaderboardScoreUploader_ScoreData*)>(
    &::GlobalNamespace::LeaderboardScoreUploader::AddScore)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3757518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(),
                                                                                           { "AddScore", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardScoreUploader::*)()>(&::GlobalNamespace::LeaderboardScoreUploader::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3757600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardScoreUploader._UploadScoresCoroutine_b__16_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LeaderboardScoreUploader::*)()>(&::GlobalNamespace::LeaderboardScoreUploader::_UploadScoresCoroutine_b__16_1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3757698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "<UploadScoresCoroutine>b__16_1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get_allScoresDidUploadEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allScoresDidUploadEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get_allScoresDidUploadEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allScoresDidUploadEvent;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_set_allScoresDidUploadEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allScoresDidUploadEvent = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>*& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__scoresToUpload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoresToUpload;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* const&
GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__scoresToUpload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoresToUpload;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_set__scoresToUpload(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoresToUpload = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>*&
GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__scoresToUploadForCurrentPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoresToUploadForCurrentPlayer;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* const&
GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__scoresToUploadForCurrentPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoresToUploadForCurrentPlayer;
}
constexpr void
GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_set__scoresToUploadForCurrentPlayer(::System::Collections::Generic::List_1<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoresToUploadForCurrentPlayer = value;
}
constexpr ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__uploadScoreCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploadScoreCallback;
}
constexpr ::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* const& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__uploadScoreCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploadScoreCallback;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_set__uploadScoreCallback(::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uploadScoreCallback = value;
}
constexpr uint64_t& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId;
}
constexpr uint64_t const& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_set__playerId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerId = value;
}
constexpr bool& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__uploading() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploading;
}
constexpr bool const& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__uploading() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uploading;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_set__uploading(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uploading = value;
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void GlobalNamespace::LeaderboardScoreUploader::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fileStorage = value;
}
inline void GlobalNamespace::LeaderboardScoreUploader::add_allScoresDidUploadEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "add_allScoresDidUploadEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardScoreUploader::remove_allScoresDidUploadEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "remove_allScoresDidUploadEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LeaderboardScoreUploader::Init(::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback* uploadScoreCallback, uint64_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(),
                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardScoreUploader_UploadScoreCallback*>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uploadScoreCallback, playerId);
}
inline void GlobalNamespace::LeaderboardScoreUploader::Uninitialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "Uninitialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader::OnApplicationQuit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "OnApplicationQuit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LeaderboardScoreUploader::UploadScoresCoroutine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "UploadScoresCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LeaderboardScoreUploader::LoadScoresToUploadFromFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "LoadScoresToUploadFromFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader::SaveScoresToUploadToFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "SaveScoresToUploadToFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LeaderboardScoreUploader::AddScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(),
                                                                                         { "AddScore", {}, { ::i2c::type_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scoreData);
}
inline void GlobalNamespace::LeaderboardScoreUploader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LeaderboardScoreUploader::_UploadScoresCoroutine_b__16_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardScoreUploader*>(), { "<UploadScoresCoroutine>b__16_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardScoreUploader* GlobalNamespace::LeaderboardScoreUploader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardScoreUploader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardScoreUploader::LeaderboardScoreUploader() {}
