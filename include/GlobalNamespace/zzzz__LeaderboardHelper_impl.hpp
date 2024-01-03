#pragma once
#include "System/Net/Http/zzzz__HttpResponseMessage_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardHelper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardHelper_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModelSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::*)()>(
    &::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::MoveNext)> {
  constexpr static std::size_t size = 0xb48;
  constexpr static std::size_t addrs = 0x22f4bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22f5700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "leaderboardID", ty: "::StringW", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "appToken", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_httpClient_5__2", ty: "::System::Net::Http::HttpClient*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_request_5__3", ty: "::System::Net::Http::HttpRequestMessage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_contentList_5__4", ty:
// "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::__LeaderboardHelper___CreateOculusLeaderboard_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW leaderboardID, ::StringW appToken, ::System::Net::Http::HttpClient* _httpClient_5__2,
    ::System::Net::Http::HttpRequestMessage* _request_5__3, ::System::Collections::Generic::List_1<::StringW>* _contentList_5__4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::Http::HttpResponseMessage*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->leaderboardID = leaderboardID;
  this->appToken = appToken;
  this->_httpClient_5__2 = _httpClient_5__2;
  this->_request_5__3 = _request_5__3;
  this->_contentList_5__4 = _contentList_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LeaderboardHelper___CreateOculusLeaderboard_d__2::__LeaderboardHelper___CreateOculusLeaderboard_d__2() {}
//  Writing Method size for method: ::GlobalNamespace::LeaderboardHelper.CreateOculusLeaderboards
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardHelper::*)(
    ::GlobalNamespace::LeaderboardIdsModelSO*, ::GlobalNamespace::BeatmapLevelCollectionSO*, bool, ::StringW)>(&::GlobalNamespace::LeaderboardHelper::CreateOculusLeaderboards)> {
  constexpr static std::size_t size = 0xe7c;
  constexpr static std::size_t addrs = 0x22f3c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardHelper*>::get(), "CreateOculusLeaderboards", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsModelSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardHelper.CreateOculusLeaderboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardHelper::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::LeaderboardHelper::CreateOculusLeaderboard)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22f4a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardHelper*>::get(), "CreateOculusLeaderboard", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardHelper::*)()>(&::GlobalNamespace::LeaderboardHelper::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22f4b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardHelper*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::LeaderboardHelper::__get__leaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::LeaderboardHelper::__get__leaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr void GlobalNamespace::LeaderboardHelper::__set__leaderboardIds(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leaderboardIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LeaderboardHelper::CreateOculusLeaderboards(::GlobalNamespace::LeaderboardIdsModelSO* leaderboardIdsModel, ::GlobalNamespace::BeatmapLevelCollectionSO* _levelCollection,
                                                                         bool debug, ::StringW appToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardHelper*>::get(), "CreateOculusLeaderboards", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LeaderboardIdsModelSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardIdsModel, _levelCollection, debug, appToken);
}
inline void GlobalNamespace::LeaderboardHelper::CreateOculusLeaderboard(::StringW leaderboardID, ::StringW appToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardHelper*>::get(), "CreateOculusLeaderboard", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, leaderboardID, appToken);
}
inline ::GlobalNamespace::LeaderboardHelper* GlobalNamespace::LeaderboardHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LeaderboardHelper*>());
}
inline void GlobalNamespace::LeaderboardHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardHelper*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardHelper::LeaderboardHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
