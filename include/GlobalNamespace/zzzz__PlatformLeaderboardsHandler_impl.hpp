#pragma once
// IWYU pragma private; include "GlobalNamespace\PlatformLeaderboardsHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsHandler.GetScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::PlatformLeaderboardsHandler::*)(::by_ref<::GlobalNamespace::BeatmapKey>, int32_t, int32_t, ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope, uint64_t,
                                                       ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*)>(&::GlobalNamespace::PlatformLeaderboardsHandler::GetScores)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsHandler*>(), { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsHandler*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsHandler.UploadScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::PlatformLeaderboardsHandler::*)(::GlobalNamespace::LeaderboardScoreUploader_ScoreData*, ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*)>(
    &::GlobalNamespace::PlatformLeaderboardsHandler::UploadScore)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsHandler*>(), { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsHandler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsHandler::*)()>(&::GlobalNamespace::PlatformLeaderboardsHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x375b8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsHandler::GetScores(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                                                                  ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scope, uint64_t referencePlayerId,
                                                                                                  ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsHandler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, beatmapKey, count, fromRank, scope, referencePlayerId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsHandler::UploadScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                                                                    ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsHandler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, scoreData, completionHandler);
}
inline void GlobalNamespace::PlatformLeaderboardsHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformLeaderboardsHandler* GlobalNamespace::PlatformLeaderboardsHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLeaderboardsHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsHandler::PlatformLeaderboardsHandler() {}
