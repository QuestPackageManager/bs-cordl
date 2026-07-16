#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformLeaderboardsHandler.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformLeaderboardsHandler_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntryList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler___c::*)()>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3757774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c.__ctor_b__4_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler___c::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*)>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler___c::__ctor_b__4_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3757778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>(),
                                                             { "<.ctor>b__4_0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler___c::setStaticF___9(::GlobalNamespace::OculusPlatformLeaderboardsHandler___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*, "<>9", ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>(
      std::forward<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>(value));
}
inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c* GlobalNamespace::OculusPlatformLeaderboardsHandler___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*, "<>9", ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>();
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler___c::setStaticF___9__4_0(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* value) {
  ::cordl_internals::setStaticField<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LeaderboardEntryList*>*, "<>9__4_0", ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>(
      std::forward<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LeaderboardEntryList*>*>(value));
}
inline ::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LeaderboardEntryList*>* GlobalNamespace::OculusPlatformLeaderboardsHandler___c::getStaticF___9__4_0() {
  return ::cordl_internals::getStaticField<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::LeaderboardEntryList*>*, "<>9__4_0",
                                           ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>();
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler___c::__ctor_b__4_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>(),
                                                           { "<.ctor>b__4_0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c* GlobalNamespace::OculusPlatformLeaderboardsHandler___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c::OculusPlatformLeaderboardsHandler___c() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37571d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0._AddOculusRequest_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::*)(::GlobalNamespace::HMAsyncRequest*)>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::_AddOculusRequest_b__0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x375777c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0*>(),
                                                                                           { "<AddOculusRequest>b__0", {}, { ::i2c::type_of<::GlobalNamespace::HMAsyncRequest*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler* const& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::Oculus::Platform::Request*& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::__cordl_internal_get_oculusRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusRequest;
}
constexpr ::Oculus::Platform::Request* const& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::__cordl_internal_get_oculusRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___oculusRequest;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::__cordl_internal_set_oculusRequest(::Oculus::Platform::Request* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___oculusRequest = value;
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::_AddOculusRequest_b__0(::GlobalNamespace::HMAsyncRequest* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0*>(),
                                                                                         { "<AddOculusRequest>b__0", {}, { ::i2c::type_of<::GlobalNamespace::HMAsyncRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0* GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0::OculusPlatformLeaderboardsHandler___c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::*)()>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37574f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0._GetScores_g__Callback_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*)>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::_GetScores_g__Callback_0)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x37577e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0*>(),
                                                { "<GetScores>g__Callback|0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler* const& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::__cordl_internal_get_completionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* const&
GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::__cordl_internal_get_completionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr void
GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::__cordl_internal_set_completionHandler(::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completionHandler = value;
}
constexpr uint64_t& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::__cordl_internal_get_referencePlayerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencePlayerId;
}
constexpr uint64_t const& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::__cordl_internal_get_referencePlayerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___referencePlayerId;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::__cordl_internal_set_referencePlayerId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___referencePlayerId = value;
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::_GetScores_g__Callback_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>* message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0*>(),
                                              { "<GetScores>g__Callback|0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::LeaderboardEntryList*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0* GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0::OculusPlatformLeaderboardsHandler___c__DisplayClass7_0() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::*)()>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x375771c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0._UploadScore_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::*)(::Oculus::Platform::Message_1<bool>*)>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::_UploadScore_b__0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3757ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0*>(),
                                                                                           { "<UploadScore>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<bool>*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler*& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler* const& GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformLeaderboardsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*&
GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::__cordl_internal_get_completionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* const&
GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::__cordl_internal_get_completionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr void
GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::__cordl_internal_set_completionHandler(::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___completionHandler = value;
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::_UploadScore_b__0(::Oculus::Platform::Message_1<bool>* messsage) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0*>(),
                                                                                         { "<UploadScore>b__0", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, messsage);
}
inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0* GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0::OculusPlatformLeaderboardsHandler___c__DisplayClass8_0() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)()>(&::GlobalNamespace::OculusPlatformLeaderboardsHandler::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x3756fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.AddOculusRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::Oculus::Platform::Request*, ::GlobalNamespace::HMAsyncRequest*)>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler::AddOculusRequest)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x37570d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(),
                                                             { "AddOculusRequest", {}, { ::i2c::type_of<::Oculus::Platform::Request*>(), ::i2c::type_of<::GlobalNamespace::HMAsyncRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.CheckMessageForValidRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::Oculus::Platform::Message*)>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler::CheckMessageForValidRequest)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x37571d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(),
                                                                                           { "CheckMessageForValidRequest", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.GetScores
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::by_ref<::GlobalNamespace::BeatmapKey>, int32_t, int32_t, ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope, uint64_t,
                                                             ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler*)>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler::GetScores)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x3757278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformLeaderboardsHandler.UploadScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::OculusPlatformLeaderboardsHandler::*)(::GlobalNamespace::LeaderboardScoreUploader_ScoreData*, ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler*)>(
    &::GlobalNamespace::OculusPlatformLeaderboardsHandler::UploadScore)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x37574f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LeaderboardIdsModel*& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__leaderboardIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIdsModel;
}
constexpr ::GlobalNamespace::LeaderboardIdsModel* const& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__leaderboardIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIdsModel;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_set__leaderboardIdsModel(::GlobalNamespace::LeaderboardIdsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardIdsModel = value;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>*& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__oculusRequestIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusRequestIds;
}
constexpr ::System::Collections::Generic::HashSet_1<uint64_t>* const& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__oculusRequestIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusRequestIds;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_set__oculusRequestIds(::System::Collections::Generic::HashSet_1<uint64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusRequestIds = value;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__gameplayModifiersModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_get__gameplayModifiersModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModel;
}
constexpr void GlobalNamespace::OculusPlatformLeaderboardsHandler::__cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModel = value;
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusPlatformLeaderboardsHandler::AddOculusRequest(::Oculus::Platform::Request* oculusRequest, ::GlobalNamespace::HMAsyncRequest* asyncRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(),
                                                           { "AddOculusRequest", {}, { ::i2c::type_of<::Oculus::Platform::Request*>(), ::i2c::type_of<::GlobalNamespace::HMAsyncRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oculusRequest, asyncRequest);
}
inline bool GlobalNamespace::OculusPlatformLeaderboardsHandler::CheckMessageForValidRequest(::Oculus::Platform::Message* message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(),
                                                                                         { "CheckMessageForValidRequest", {}, { ::i2c::type_of<::Oculus::Platform::Message*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, message);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::OculusPlatformLeaderboardsHandler::GetScores(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, int32_t count, int32_t fromRank,
                                                                                                        ::GlobalNamespace::PlatformLeaderboardsModel_ScoresScope scope, uint64_t referencePlayerId,
                                                                                                        ::GlobalNamespace::PlatformLeaderboardsModel_GetScoresCompletionHandler* completionHandler) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, beatmapKey, count, fromRank, scope, referencePlayerId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::OculusPlatformLeaderboardsHandler::UploadScore(::GlobalNamespace::LeaderboardScoreUploader_ScoreData* scoreData,
                                                                ::GlobalNamespace::PlatformLeaderboardsModel_UploadScoreCompletionHandler* completionHandler) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*>(this, ___internal_method, scoreData, completionHandler);
}
inline ::GlobalNamespace::OculusPlatformLeaderboardsHandler* GlobalNamespace::OculusPlatformLeaderboardsHandler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusPlatformLeaderboardsHandler*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformLeaderboardsHandler::OculusPlatformLeaderboardsHandler() {}
