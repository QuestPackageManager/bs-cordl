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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::ByRef<::GlobalNamespace::BeatmapKey>, int32_t, int32_t, ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope, ::StringW,
                                                           ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*)>(&::GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x270a6c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestPlatformLeaderboardsHandler.UploadScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::GlobalNamespace::LeaderboardScoreUploader_ScoreData*, ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*)>(
    &::GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x270a71c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestPlatformLeaderboardsHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TestPlatformLeaderboardsHandler::*)()>(
    &::GlobalNamespace::TestPlatformLeaderboardsHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270a770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                                                                      ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scope, ::StringW referencePlayerId,
                                                                                                      ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, beatmapKey, count, fromRank, scope, referencePlayerId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                                                                        ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, scoreData, completionHandler);
}
inline void GlobalNamespace::TestPlatformLeaderboardsHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TestPlatformLeaderboardsHandler* GlobalNamespace::TestPlatformLeaderboardsHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TestPlatformLeaderboardsHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestPlatformLeaderboardsHandler::TestPlatformLeaderboardsHandler() {}
