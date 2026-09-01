#pragma once
// IWYU pragma private; include "GlobalNamespace\OculusDeeplinkManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusDeeplinkManager_def.hpp"
#include "GlobalNamespace/zzzz__Deeplink_def.hpp"
#include "GlobalNamespace/zzzz__IDeeplinkManager_def.hpp"
#include "Oculus/Platform/Models/zzzz__GroupPresenceJoinIntent_def.hpp"
#include "Oculus/Platform/Models/zzzz__LaunchDetails_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager.add_didReceiveDeeplinkEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusDeeplinkManager::*)(::System::Action_1<::GlobalNamespace::Deeplink*>*)>(
    &::GlobalNamespace::OculusDeeplinkManager::add_didReceiveDeeplinkEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x370801c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(),
                                                             { "add_didReceiveDeeplinkEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::Deeplink*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager.remove_didReceiveDeeplinkEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusDeeplinkManager::*)(::System::Action_1<::GlobalNamespace::Deeplink*>*)>(
    &::GlobalNamespace::OculusDeeplinkManager::remove_didReceiveDeeplinkEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x37080dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(),
                                                             { "remove_didReceiveDeeplinkEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::Deeplink*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager.get_currentDeeplink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Deeplink* (::GlobalNamespace::OculusDeeplinkManager::*)()>(&::GlobalNamespace::OculusDeeplinkManager::get_currentDeeplink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x370819c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "get_currentDeeplink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusDeeplinkManager::*)()>(&::GlobalNamespace::OculusDeeplinkManager::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x37081a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager.OculusPlatformWasInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusDeeplinkManager::*)()>(&::GlobalNamespace::OculusDeeplinkManager::OculusPlatformWasInitialized)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3708224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "OculusPlatformWasInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager.SetJoinIntentReceivedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusDeeplinkManager::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*)>(
    &::GlobalNamespace::OculusDeeplinkManager::SetJoinIntentReceivedNotificationCallback)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x370823c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(),
                            { "SetJoinIntentReceivedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager.UpdateDeeplinkMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusDeeplinkManager::*)(
    ::Oculus::Platform::Models::GroupPresenceJoinIntent*, ::Oculus::Platform::Models::LaunchDetails*)>(&::GlobalNamespace::OculusDeeplinkManager::UpdateDeeplinkMessage)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x3708354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(),
                         { "UpdateDeeplinkMessage", {}, { ::i2c::type_of<::Oculus::Platform::Models::GroupPresenceJoinIntent*>(), ::i2c::type_of<::Oculus::Platform::Models::LaunchDetails*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager.IsAtLeastOneFieldPopulated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OculusDeeplinkManager::*)(::GlobalNamespace::Deeplink*)>(
    &::GlobalNamespace::OculusDeeplinkManager::IsAtLeastOneFieldPopulated)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3708590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "IsAtLeastOneFieldPopulated", {}, { ::i2c::type_of<::GlobalNamespace::Deeplink*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::OculusDeeplinkManager::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x37082f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusDeeplinkManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OculusDeeplinkManager::*)()>(&::GlobalNamespace::OculusDeeplinkManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37085fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::Deeplink*>*& GlobalNamespace::OculusDeeplinkManager::__cordl_internal_get_didReceiveDeeplinkEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReceiveDeeplinkEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::Deeplink*>* const& GlobalNamespace::OculusDeeplinkManager::__cordl_internal_get_didReceiveDeeplinkEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReceiveDeeplinkEvent;
}
constexpr void GlobalNamespace::OculusDeeplinkManager::__cordl_internal_set_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didReceiveDeeplinkEvent = value;
}
constexpr ::GlobalNamespace::Deeplink*& GlobalNamespace::OculusDeeplinkManager::__cordl_internal_get__currentDeeplink() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDeeplink;
}
constexpr ::GlobalNamespace::Deeplink* const& GlobalNamespace::OculusDeeplinkManager::__cordl_internal_get__currentDeeplink() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDeeplink;
}
constexpr void GlobalNamespace::OculusDeeplinkManager::__cordl_internal_set__currentDeeplink(::GlobalNamespace::Deeplink* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDeeplink = value;
}
constexpr bool& GlobalNamespace::OculusDeeplinkManager::__cordl_internal_get__oculusPlatformWasInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusPlatformWasInitialized;
}
constexpr bool const& GlobalNamespace::OculusDeeplinkManager::__cordl_internal_get__oculusPlatformWasInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusPlatformWasInitialized;
}
constexpr void GlobalNamespace::OculusDeeplinkManager::__cordl_internal_set__oculusPlatformWasInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____oculusPlatformWasInitialized = value;
}
inline void GlobalNamespace::OculusDeeplinkManager::add_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(),
                                                           { "add_didReceiveDeeplinkEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::Deeplink*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OculusDeeplinkManager::remove_didReceiveDeeplinkEvent(::System::Action_1<::GlobalNamespace::Deeplink*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(),
                                                           { "remove_didReceiveDeeplinkEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::Deeplink*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Deeplink* GlobalNamespace::OculusDeeplinkManager::get_currentDeeplink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "get_currentDeeplink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Deeplink*>(this, ___internal_method);
}
inline void GlobalNamespace::OculusDeeplinkManager::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusDeeplinkManager::OculusPlatformWasInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "OculusPlatformWasInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OculusDeeplinkManager::SetJoinIntentReceivedNotificationCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>* message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(),
                          { "SetJoinIntentReceivedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::GroupPresenceJoinIntent*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::OculusDeeplinkManager::UpdateDeeplinkMessage(::Oculus::Platform::Models::GroupPresenceJoinIntent* joinIntent, ::Oculus::Platform::Models::LaunchDetails* launchDetails) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(),
                          { "UpdateDeeplinkMessage", {}, { ::i2c::type_of<::Oculus::Platform::Models::GroupPresenceJoinIntent*>(), ::i2c::type_of<::Oculus::Platform::Models::LaunchDetails*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, joinIntent, launchDetails);
}
inline bool GlobalNamespace::OculusDeeplinkManager::IsAtLeastOneFieldPopulated(::GlobalNamespace::Deeplink* deeplink) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "IsAtLeastOneFieldPopulated", {}, { ::i2c::type_of<::GlobalNamespace::Deeplink*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deeplink);
}
inline void GlobalNamespace::OculusDeeplinkManager::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void GlobalNamespace::OculusDeeplinkManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OculusDeeplinkManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OculusDeeplinkManager* GlobalNamespace::OculusDeeplinkManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OculusDeeplinkManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDeeplinkManager"
constexpr GlobalNamespace::OculusDeeplinkManager::operator ::GlobalNamespace::IDeeplinkManager*() noexcept {
  return static_cast<::GlobalNamespace::IDeeplinkManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDeeplinkManager"
constexpr ::GlobalNamespace::IDeeplinkManager* GlobalNamespace::OculusDeeplinkManager::i___GlobalNamespace__IDeeplinkManager() noexcept {
  return static_cast<::GlobalNamespace::IDeeplinkManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusDeeplinkManager::OculusDeeplinkManager() {}
