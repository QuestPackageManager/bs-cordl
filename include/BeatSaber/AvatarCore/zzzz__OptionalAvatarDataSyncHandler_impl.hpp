#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/OptionalAvatarDataSyncHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSyncHandler_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataPacket_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler.add_didChangeOptionalAvatarDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::*)(::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>*)>(
        &::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::add_didChangeOptionalAvatarDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x326f9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
            { "add_didChangeOptionalAvatarDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler.remove_didChangeOptionalAvatarDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::*)(::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>*)>(
        &::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::remove_didChangeOptionalAvatarDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x326fb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
            { "remove_didChangeOptionalAvatarDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::*)(::GlobalNamespace::IBeatSaberMultiplayerSessionManager*)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::_ctor)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x32708e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::*)()>(&::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::Dispose)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3270af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler.SendOptionalAvatarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::*)(::BeatSaber::AvatarCore::OptionalAvatarData)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::SendOptionalAvatarData)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x327068c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
                                                                                           { "SendOptionalAvatarData", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler.TryGetAllLatestOptionalAvatarData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::*)(
    ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>)>(
    &::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::TryGetAllLatestOptionalAvatarData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x326f618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
                                                { "TryGetAllLatestOptionalAvatarData",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler.HandleOptionalAvatarDataPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::*)(
    ::BeatSaber::AvatarCore::OptionalAvatarDataPacket*, ::GlobalNamespace::IBeatSaberConnectedPlayer*)>(&::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::HandleOptionalAvatarDataPacket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3270e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
            { "HandleOptionalAvatarDataPacket", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler.HandleOptionalAvatarDataChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::AvatarCore::OptionalAvatarData (::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::*)(
    uint32_t, ::GlobalNamespace::ByteArrayNetSerializable*, ::GlobalNamespace::IBeatSaberConnectedPlayer*)>(&::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::HandleOptionalAvatarDataChanged)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x3270bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
                            { "HandleOptionalAvatarDataChanged",
                              {},
                              { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::ByteArrayNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>*&
BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::__cordl_internal_get_didChangeOptionalAvatarDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeOptionalAvatarDataEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>* const&
BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::__cordl_internal_get_didChangeOptionalAvatarDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeOptionalAvatarDataEvent;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::__cordl_internal_set_didChangeOptionalAvatarDataEvent(
    ::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeOptionalAvatarDataEvent = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                       ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>*&
BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::__cordl_internal_get__latestOptionalAvatarDataDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestOptionalAvatarDataDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IBeatSaberConnectedPlayer*,
                                                       ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>* const&
BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::__cordl_internal_get__latestOptionalAvatarDataDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestOptionalAvatarDataDictionary;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::__cordl_internal_set__latestOptionalAvatarDataDictionary(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____latestOptionalAvatarDataDictionary = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::add_didChangeOptionalAvatarDataEvent(
    ::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
          { "add_didChangeOptionalAvatarDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::remove_didChangeOptionalAvatarDataEvent(
    ::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
          { "remove_didChangeOptionalAvatarDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::SendOptionalAvatarData(::BeatSaber::AvatarCore::OptionalAvatarData data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
                                                                                         { "SendOptionalAvatarData", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::TryGetAllLatestOptionalAvatarData(
    ::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer, ::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
                                                           { "TryGetAllLatestOptionalAvatarData",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, connectedPlayer, data);
}
inline void BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::HandleOptionalAvatarDataPacket(::BeatSaber::AvatarCore::OptionalAvatarDataPacket* packet,
                                                                                                 ::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
          { "HandleOptionalAvatarDataPacket", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet, connectedPlayer);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarData
BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::HandleOptionalAvatarDataChanged(uint32_t dataType, ::GlobalNamespace::ByteArrayNetSerializable* data,
                                                                                      ::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(),
                          { "HandleOptionalAvatarDataChanged",
                            {},
                            { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::ByteArrayNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::AvatarCore::OptionalAvatarData>(this, ___internal_method, dataType, data, connectedPlayer);
}
inline ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*
BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>(multiplayerSessionManager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler::OptionalAvatarDataSyncHandler() {}
