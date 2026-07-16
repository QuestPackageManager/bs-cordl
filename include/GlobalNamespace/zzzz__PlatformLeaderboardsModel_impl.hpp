#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatform_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_State::PlatformLeaderboardsModel_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_State::PlatformLeaderboardsModel_State() {}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_State GlobalNamespace::PlatformLeaderboardsModel_State::NotInitialized{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_State GlobalNamespace::PlatformLeaderboardsModel_State::Initializing{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_State GlobalNamespace::PlatformLeaderboardsModel_State::Initialized{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult::PlatformLeaderboardsModel_GetScoresResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult::PlatformLeaderboardsModel_GetScoresResult() {}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult::Ok{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult::Failed{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult::FailedTooManyRequests{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult::PlatformLeaderboardsModel_UploadScoreResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult::PlatformLeaderboardsModel_UploadScoreResult() {}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult::Ok{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult::Failed{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult::FailedTooManyRequests{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope::PlatformLeaderboardsModel_ScoresScope(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope::PlatformLeaderboardsModel_ScoresScope() {}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope GlobalNamespace::PlatformLeaderboardsModel_ScoresScope::Global{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope GlobalNamespace::PlatformLeaderboardsModel_ScoresScope::AroundPlayer{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope GlobalNamespace::PlatformLeaderboardsModel_ScoresScope::Friends{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x37587d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::*)(
    ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult, ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>, int32_t)>(
    &::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3758844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::*)(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult,
                                                                                ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>, int32_t, ::System::AsyncCallback*,
                                                                                ::System::Object*)>(&::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3758858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3758904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::Invoke(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult result,
                                                                                          ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*> scores,
                                                                                          int32_t referencePlayerScoreIndex) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, scores, referencePlayerScoreIndex);
}
inline ::System::IAsyncResult* GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::BeginInvoke(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult result,
                                                                                                                  ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*> scores,
                                                                                                                  int32_t referencePlayerScoreIndex, ::System::AsyncCallback* callback,
                                                                                                                  ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, result, scores, referencePlayerScoreIndex, callback, object);
}
inline void GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler::PlatformLeaderboardsModel_GetScoresCompletionHandler() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3758910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::*)(
    ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult)>(&::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x375897c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::*)(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3758990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3758a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(), 15 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::Invoke(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::System::IAsyncResult* GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::BeginInvoke(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreResult result,
                                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, result, callback, object);
}
inline void GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::New_ctor(::System::Object* object,
                                                                                                                                                                    ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler::PlatformLeaderboardsModel_UploadScoreCompletionHandler() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::*)(int32_t, int32_t, ::StringW, uint64_t)>(
    &::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3758a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::*)(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::CompareTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3758a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_get_score() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr int32_t const& GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_get_score() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_set_score(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___score = value;
}
constexpr int32_t& GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_get_rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr int32_t const& GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_get_rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rank;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_set_rank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rank = value;
}
constexpr ::StringW& GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_get_playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr ::StringW const& GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_get_playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_set_playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerName = value;
}
constexpr uint64_t& GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_get_playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr uint64_t const& GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_get_playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::__cordl_internal_set_playerId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerId = value;
}
inline void GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::_ctor(int32_t score, int32_t rank, ::StringW playerName, uint64_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, score, rank, playerName, playerId);
}
inline int32_t GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::CompareTo(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::New_ctor(int32_t score, int32_t rank, ::StringW playerName,
                                                                                                                                            uint64_t playerId) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>(score, rank, playerName, playerId));
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>"
constexpr GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::operator ::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>"
constexpr ::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*
GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::i___System__IComparable_1___GlobalNamespace__PlatformLeaderboardsModel_LeaderboardScore__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore::PlatformLeaderboardsModel_LeaderboardScore() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel___c::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3758aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel___c._GetScores_b__26_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlatformLeaderboardsModel___c::*)(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel___c::_GetScores_b__26_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3758aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c*>(),
                                                             { "<GetScores>b__26_2", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlatformLeaderboardsModel___c::setStaticF___9(::GlobalNamespace::PlatformLeaderboardsModel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PlatformLeaderboardsModel___c*, "<>9", ::GlobalNamespace::PlatformLeaderboardsModel___c*>(
      std::forward<::GlobalNamespace::PlatformLeaderboardsModel___c*>(value));
}
inline ::GlobalNamespace::PlatformLeaderboardsModel___c* GlobalNamespace::PlatformLeaderboardsModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PlatformLeaderboardsModel___c*, "<>9", ::GlobalNamespace::PlatformLeaderboardsModel___c*>();
}
inline void GlobalNamespace::PlatformLeaderboardsModel___c::setStaticF___9__26_2(::System::Func_2<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, bool>*, "<>9__26_2", ::GlobalNamespace::PlatformLeaderboardsModel___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, bool>* GlobalNamespace::PlatformLeaderboardsModel___c::getStaticF___9__26_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*, bool>*, "<>9__26_2", ::GlobalNamespace::PlatformLeaderboardsModel___c*>();
}
inline void GlobalNamespace::PlatformLeaderboardsModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlatformLeaderboardsModel___c::_GetScores_b__26_2(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c*>(),
                                                           { "<GetScores>b__26_2", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::PlatformLeaderboardsModel___c* GlobalNamespace::PlatformLeaderboardsModel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLeaderboardsModel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel___c::PlatformLeaderboardsModel___c() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::*)()>(
    &::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3758ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0._GetScores_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::*)(::GlobalNamespace::HMAsyncRequest*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::_GetScores_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3758acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*>(),
                                                                                           { "<GetScores>b__0", {}, { ::i2c::type_of<::GlobalNamespace::HMAsyncRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0._GetScores_g__HandleGetScoresCompleted_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::*)(
    ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult, ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>, int32_t)>(
    &::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::_GetScores_g__HandleGetScoresCompleted_1)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x3758af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*>(),
                                                             { "<GetScores>g__HandleGetScoresCompleted|1",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult>(),
                                                                 ::i2c::type_of<::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0._GetScores_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::*)(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::_GetScores_b__3)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3759078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*>(),
                                                             { "<GetScores>b__3", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel>& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> const& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlatformLeaderboardsModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_completionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* const&
GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_completionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr void
GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set_completionHandler(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completionHandler = value;
}
constexpr float_t& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_maxPossibleScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPossibleScore;
}
constexpr float_t const& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_maxPossibleScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxPossibleScore;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set_maxPossibleScore(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxPossibleScore = value;
}
constexpr int32_t& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr int32_t const& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
constexpr int32_t& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_previousRequestEntriesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousRequestEntriesCount;
}
constexpr int32_t const& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_previousRequestEntriesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousRequestEntriesCount;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set_previousRequestEntriesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousRequestEntriesCount = value;
}
constexpr int32_t& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_searchAttemptCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchAttemptCount;
}
constexpr int32_t const& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_searchAttemptCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchAttemptCount;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set_searchAttemptCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___searchAttemptCount = value;
}
constexpr int32_t& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_searchRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchRange;
}
constexpr int32_t const& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_searchRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___searchRange;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set_searchRange(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___searchRange = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
constexpr int32_t& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_fromRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromRank;
}
constexpr int32_t const& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_fromRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fromRank;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set_fromRank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fromRank = value;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_scope() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scope;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope const& GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_get_scope() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scope;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::__cordl_internal_set_scope(::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scope = value;
}
inline void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::_GetScores_b__0(::GlobalNamespace::HMAsyncRequest* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*>(),
                                                                                         { "<GetScores>b__0", {}, { ::i2c::type_of<::GlobalNamespace::HMAsyncRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::_GetScores_g__HandleGetScoresCompleted_1(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult result,
                                                                                                                       ::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*> entries,
                                                                                                                       int32_t referencePlayerScoreIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*>(),
                                                           { "<GetScores>g__HandleGetScoresCompleted|1",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresResult>(),
                                                               ::i2c::type_of<::ArrayW<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, entries, referencePlayerScoreIndex);
}
inline bool GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::_GetScores_b__3(::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore* entry) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*>(),
                                                           { "<GetScores>b__3", {}, { ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_LeaderboardScore*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0* GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel___c__DisplayClass26_0::PlatformLeaderboardsModel___c__DisplayClass26_0() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.add_allScoresDidUploadEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)(::System::Action*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel::add_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3757c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "add_allScoresDidUploadEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.remove_allScoresDidUploadEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)(::System::Action*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel::remove_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3757ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "remove_allScoresDidUploadEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.get_playerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::get_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3757d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "get_playerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.get_initialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::get_initialized)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3757d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "get_initialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::OnDestroy)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3757f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::Initialize)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3757dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.InitializeForUserInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)(uint64_t)>(&::GlobalNamespace::PlatformLeaderboardsModel::InitializeForUserInfo)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x3758020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "InitializeForUserInfo", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.UploadScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::LeaderboardScoreUploader_ScoreData*, ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel::UploadScore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3758214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                                                           { "UploadScore",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.GetScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::BeatmapKey, int32_t, int32_t, ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope,
                                                     ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*)>(&::GlobalNamespace::PlatformLeaderboardsModel::GetScores)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x3758294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                                                           { "GetScores",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.HandleAllScoresDidUpload
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::HandleAllScoresDidUpload)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3758568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "HandleAllScoresDidUpload", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.GetScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::PlatformLeaderboardsModel::*)(::by_ref<::GlobalNamespace::BeatmapKey>, int32_t, int32_t, ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel::GetScores)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3758584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                             { "GetScores",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.GetScoresAroundPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::PlatformLeaderboardsModel::*)(::by_ref<::GlobalNamespace::BeatmapKey>, int32_t, ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel::GetScoresAroundPlayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x37585a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                                                           { "GetScoresAroundPlayer",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.GetFriendsScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::PlatformLeaderboardsModel::*)(::by_ref<::GlobalNamespace::BeatmapKey>, int32_t, int32_t, ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel::GetFriendsScores)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x37585c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                             { "GetFriendsScores",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.UploadScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)(::by_ref<::GlobalNamespace::BeatmapKey>, int32_t, int32_t, int32_t, bool, int32_t,
                                                                                                              int32_t, int32_t, int32_t, float_t, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::PlatformLeaderboardsModel::UploadScore)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x37585e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                             { "UploadScore",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3758740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModel = value;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader>& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__leaderboardScoreUploader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardScoreUploader;
}
constexpr ::UnityW<::GlobalNamespace::LeaderboardScoreUploader> const& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__leaderboardScoreUploader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardScoreUploader;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_set__leaderboardScoreUploader(::UnityW<::GlobalNamespace::LeaderboardScoreUploader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardScoreUploader = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatform*& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr ::OculusStudios::Platform::Core::IPlatform* const& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platform;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_set__platform(::OculusStudios::Platform::Core::IPlatform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platform = value;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsHandler*& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__platformLeaderboardsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsHandler;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsHandler* const& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__platformLeaderboardsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformLeaderboardsHandler;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_set__platformLeaderboardsHandler(::GlobalNamespace::PlatformLeaderboardsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformLeaderboardsHandler = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::System::Action*& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get_allScoresDidUploadEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allScoresDidUploadEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get_allScoresDidUploadEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allScoresDidUploadEvent;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_set_allScoresDidUploadEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allScoresDidUploadEvent = value;
}
constexpr ::GlobalNamespace::HMAsyncRequest*& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__currentGetScoreRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentGetScoreRequest;
}
constexpr ::GlobalNamespace::HMAsyncRequest* const& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__currentGetScoreRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentGetScoreRequest;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_set__currentGetScoreRequest(::GlobalNamespace::HMAsyncRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentGetScoreRequest = value;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_State& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_State const& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_set__state(::GlobalNamespace::PlatformLeaderboardsModel_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr uint64_t& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId;
}
constexpr uint64_t const& GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_get__playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId;
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__cordl_internal_set__playerId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerId = value;
}
inline void GlobalNamespace::PlatformLeaderboardsModel::add_allScoresDidUploadEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "add_allScoresDidUploadEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::remove_allScoresDidUploadEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "remove_allScoresDidUploadEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint64_t GlobalNamespace::PlatformLeaderboardsModel::get_playerId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "get_playerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline bool GlobalNamespace::PlatformLeaderboardsModel::get_initialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "get_initialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::InitializeForUserInfo(uint64_t userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "InitializeForUserInfo", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsModel::UploadScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                                                                  ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                                                         { "UploadScore",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::LeaderboardScoreUploader_ScoreData*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, scoreData, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsModel::GetScores(::GlobalNamespace::BeatmapKey beatmapKey, int32_t count, int32_t fromRank,
                                                                                                ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scope,
                                                                                                ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                                                         { "GetScores",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, beatmapKey, count, fromRank, scope, completionHandler);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::HandleAllScoresDidUpload() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { "HandleAllScoresDidUpload", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsModel::GetScores(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                                                                ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                           { "GetScores",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, beatmapKey, count, fromRank, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::PlatformLeaderboardsModel::GetScoresAroundPlayer(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count,
                                                                  ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                                                         { "GetScoresAroundPlayer",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, beatmapKey, count, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsModel::GetFriendsScores(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                                                                       ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                           { "GetFriendsScores",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, beatmapKey, count, fromRank, completionHandler);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::UploadScore(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t multipliedScore, int32_t modifiedScore,
                                                                    int32_t maxPossibleMultipliedScore, bool fullCombo, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount,
                                                                    int32_t maxCombo, float_t energy, ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(),
                                                           { "UploadScore",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey, multipliedScore, modifiedScore, maxPossibleMultipliedScore, fullCombo, goodCutsCount, badCutsCount,
                                                   missedCount, maxCombo, energy, gameplayModifiers);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlatformLeaderboardsModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformLeaderboardsModel* GlobalNamespace::PlatformLeaderboardsModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformLeaderboardsModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformLeaderboardsModel::PlatformLeaderboardsModel() {}
