#pragma once
// IWYU pragma private; include "GlobalNamespace\DeeplinkManagerToDestinationRequestManagerAdapter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DeeplinkManagerToDestinationRequestManagerAdapter_def.hpp"
#include "Analytics/Model/zzzz__TelemetryModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__Deeplink_def.hpp"
#include "GlobalNamespace/zzzz__IDeeplinkManager_def.hpp"
#include "GlobalNamespace/zzzz__IDestinationRequestManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter.add_didSendMenuDestinationRequestEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(::System::Action_1<::GlobalNamespace::MenuDestination*>*)>(
    &::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::add_didSendMenuDestinationRequestEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x597e15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                             { "add_didSendMenuDestinationRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MenuDestination*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter.remove_didSendMenuDestinationRequestEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(::System::Action_1<::GlobalNamespace::MenuDestination*>*)>(
    &::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::remove_didSendMenuDestinationRequestEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x597e21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                             { "remove_didSendMenuDestinationRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MenuDestination*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter.get_currentMenuDestinationRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MenuDestination* (::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)()>(
    &::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::get_currentMenuDestinationRequest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597e2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(), { "get_currentMenuDestinationRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter.set_currentMenuDestinationRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(::GlobalNamespace::MenuDestination*)>(
    &::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::set_currentMenuDestinationRequest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x597e2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                                                           { "set_currentMenuDestinationRequest", {}, { ::i2c::type_of<::GlobalNamespace::MenuDestination*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(::GlobalNamespace::IDeeplinkManager*)>(
    &::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Init)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x597e304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                                                           { "Init", {}, { ::i2c::type_of<::GlobalNamespace::IDeeplinkManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter.Clear
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)()>(
    &::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597eb74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(), { "Clear", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter.HandleDeeplinkManagerDidReceiveDeeplink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)(::GlobalNamespace::Deeplink*)>(
    &::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::HandleDeeplinkManagerDidReceiveDeeplink)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x597e4d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                                                           { "HandleDeeplinkManagerDidReceiveDeeplink", {}, { ::i2c::type_of<::GlobalNamespace::Deeplink*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::*)()>(
    &::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597eb7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::Analytics::Model::TelemetryModel*& GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get__telemetryModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr ::Analytics::Model::TelemetryModel* const& GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get__telemetryModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryModel;
}
constexpr void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryModel = value;
}
constexpr ::System::Action_1<::GlobalNamespace::MenuDestination*>*& GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get_didSendMenuDestinationRequestEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSendMenuDestinationRequestEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::MenuDestination*>* const&
GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get_didSendMenuDestinationRequestEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSendMenuDestinationRequestEvent;
}
constexpr void
GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_set_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSendMenuDestinationRequestEvent = value;
}
constexpr ::GlobalNamespace::MenuDestination*& GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get__currentMenuDestinationRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentMenuDestinationRequest;
}
constexpr ::GlobalNamespace::MenuDestination* const& GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_get__currentMenuDestinationRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentMenuDestinationRequest;
}
constexpr void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::__cordl_internal_set__currentMenuDestinationRequest(::GlobalNamespace::MenuDestination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentMenuDestinationRequest = value;
}
inline void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::add_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                           { "add_didSendMenuDestinationRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MenuDestination*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::remove_didSendMenuDestinationRequestEvent(::System::Action_1<::GlobalNamespace::MenuDestination*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                           { "remove_didSendMenuDestinationRequestEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MenuDestination*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MenuDestination* GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::get_currentMenuDestinationRequest() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(), { "get_currentMenuDestinationRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuDestination*>(this, ___internal_method);
}
inline void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::set_currentMenuDestinationRequest(::GlobalNamespace::MenuDestination* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                                                         { "set_currentMenuDestinationRequest", {}, { ::i2c::type_of<::GlobalNamespace::MenuDestination*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Init(::GlobalNamespace::IDeeplinkManager* deeplinkManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::IDeeplinkManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deeplinkManager);
}
inline void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::HandleDeeplinkManagerDidReceiveDeeplink(::GlobalNamespace::Deeplink* deeplink) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(),
                                                                                         { "HandleDeeplinkManagerDidReceiveDeeplink", {}, { ::i2c::type_of<::GlobalNamespace::Deeplink*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deeplink);
}
inline void GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter* GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDestinationRequestManager"
constexpr GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::operator ::GlobalNamespace::IDestinationRequestManager*() noexcept {
  return static_cast<::GlobalNamespace::IDestinationRequestManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDestinationRequestManager"
constexpr ::GlobalNamespace::IDestinationRequestManager* GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::i___GlobalNamespace__IDestinationRequestManager() noexcept {
  return static_cast<::GlobalNamespace::IDestinationRequestManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeeplinkManagerToDestinationRequestManagerAdapter::DeeplinkManagerToDestinationRequestManagerAdapter() {}
