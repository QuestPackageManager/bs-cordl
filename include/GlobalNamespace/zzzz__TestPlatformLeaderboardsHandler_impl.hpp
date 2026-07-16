#pragma once
// IWYU pragma private; include "GlobalNamespace/TestPlatformLeaderboardsHandler.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_impl.hpp"
#include "GlobalNamespace/zzzz__TestPlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestPlatformLeaderboardsHandler.GetScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::by_ref<::GlobalNamespace::BeatmapKey>, int32_t, int32_t, ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope, uint64_t,
                                                           ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*)>(&::GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3757b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestPlatformLeaderboardsHandler*>(), { ::i2c::class_of<::GlobalNamespace::TestPlatformLeaderboardsHandler*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestPlatformLeaderboardsHandler.UploadScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::GlobalNamespace::LeaderboardScoreUploader_ScoreData*, ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*)>(
    &::GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3757be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestPlatformLeaderboardsHandler*>(), { ::i2c::class_of<::GlobalNamespace::TestPlatformLeaderboardsHandler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestPlatformLeaderboardsHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestPlatformLeaderboardsHandler::*)()>(&::GlobalNamespace::TestPlatformLeaderboardsHandler::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3757c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestPlatformLeaderboardsHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                                                                      ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scope, uint64_t referencePlayerId,
                                                                                                      ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TestPlatformLeaderboardsHandler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, beatmapKey, count, fromRank, scope, referencePlayerId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                                                                        ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TestPlatformLeaderboardsHandler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, scoreData, completionHandler);
}
inline void GlobalNamespace::TestPlatformLeaderboardsHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TestPlatformLeaderboardsHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestPlatformLeaderboardsHandler* GlobalNamespace::TestPlatformLeaderboardsHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestPlatformLeaderboardsHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestPlatformLeaderboardsHandler::TestPlatformLeaderboardsHandler() {}
