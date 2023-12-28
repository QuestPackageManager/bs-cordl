#pragma once
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_impl.hpp"
#include "GlobalNamespace/zzzz__TestPlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestPlatformLeaderboardsHandler.GetScores
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::GlobalNamespace::IDifficultyBeatmap*, int32_t, int32_t, ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::StringW,
                                                           ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*)>(
    &::GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x232afb4;

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
    ::GlobalNamespace::TestPlatformLeaderboardsHandler::*)(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*, ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*)>(
    &::GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x232b010;

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
  constexpr static std::size_t addrs = 0x232b06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::TestPlatformLeaderboardsHandler::GetScores(::GlobalNamespace::IDifficultyBeatmap* beatmap, int32_t count, int32_t fromRank,
                                                                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope scope, ::StringW referencePlayerId,
                                                                                                      ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* completionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(), "GetScores", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, beatmap, count, fromRank, scope, referencePlayerId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::TestPlatformLeaderboardsHandler::UploadScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData* scoreData,
                                                              ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* completionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(), "UploadScore", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, scoreData, completionHandler);
}
inline ::GlobalNamespace::TestPlatformLeaderboardsHandler* GlobalNamespace::TestPlatformLeaderboardsHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TestPlatformLeaderboardsHandler*>());
}
inline void GlobalNamespace::TestPlatformLeaderboardsHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TestPlatformLeaderboardsHandler*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestPlatformLeaderboardsHandler::TestPlatformLeaderboardsHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
