#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/ConnectedPlayerOptionalAvatarDataProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__ConnectedPlayerOptionalAvatarDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarDisplayContext_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IOptionalAvatarDataProvider_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataSyncHandler_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider.get_currentData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* (
    ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::*)()>(&::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::get_currentData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x31a0a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "get_currentData",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider.get_playbackDelayMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::get_playbackDelayMs)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x31a0afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(),
                                                 "get_playbackDelayMs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider.add_dataDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*)>(&::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::add_dataDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31a0c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "add_dataDidChangeEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider.remove_dataDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::*)(
    ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*)>(&::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::remove_dataDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31a0cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "remove_dataDidChangeEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::*)(
    ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*)>(
    &::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x31a0dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::*)()>(
    &::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x31a0f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider.SetDisplayContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::*)(
    ::BeatSaber::AvatarCore::AvatarDisplayContext)>(&::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::SetDisplayContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31a106c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "SetDisplayContext",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarDisplayContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider.HandleOptionalAvatarDataSyncHandlerDidChangeOptionalAvatarDataSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*, ::BeatSaber::AvatarCore::OptionalAvatarData)>(
        &::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::HandleOptionalAvatarDataSyncHandlerDidChangeOptionalAvatarDataSync)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x31a1070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(),
                                                 "HandleOptionalAvatarDataSyncHandlerDidChangeOptionalAvatarDataSync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*& BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_get_dataDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataDidChangeEvent;
}
constexpr ::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* const& BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_get_dataDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataDidChangeEvent;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_set_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dataDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*& BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_get__optionalAvatarDataSyncHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSyncHandler;
}
constexpr ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* const& BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_get__optionalAvatarDataSyncHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____optionalAvatarDataSyncHandler;
}
constexpr void BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::__cordl_internal_set__optionalAvatarDataSyncHandler(::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____optionalAvatarDataSyncHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>* BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::get_currentData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "get_currentData",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<uint32_t, ::BeatSaber::AvatarCore::OptionalAvatarData>*, false>(this, ___internal_method);
}
inline int64_t BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::get_playbackDelayMs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(),
                                               "get_playbackDelayMs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::add_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "add_dataDidChangeEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::remove_dataDidChangeEvent(::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "remove_dataDidChangeEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::BeatSaber::AvatarCore::OptionalAvatarData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer,
                                                                                    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                                    ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer, multiplayerSessionManager, optionalAvatarDataSyncHandler);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::SetDisplayContext(::BeatSaber::AvatarCore::AvatarDisplayContext avatarDisplayContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(), "SetDisplayContext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::AvatarDisplayContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, avatarDisplayContext);
}
inline void
BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::HandleOptionalAvatarDataSyncHandlerDidChangeOptionalAvatarDataSync(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer,
                                                                                                                                     ::BeatSaber::AvatarCore::OptionalAvatarData optionalAvatarData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>::get(),
                                               "HandleOptionalAvatarDataSyncHandlerDidChangeOptionalAvatarDataSync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::AvatarCore::OptionalAvatarData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayer, optionalAvatarData);
}
inline ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*
BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer,
                                                                           ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                           ::BeatSaber::AvatarCore::OptionalAvatarDataSyncHandler* optionalAvatarDataSyncHandler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider*>(connectedPlayer, multiplayerSessionManager, optionalAvatarDataSyncHandler));
}
/// @brief Convert operator to "::BeatSaber::AvatarCore::IOptionalAvatarDataProvider"
constexpr BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::operator ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::AvatarCore::IOptionalAvatarDataProvider"
constexpr ::BeatSaber::AvatarCore::IOptionalAvatarDataProvider* BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::i___BeatSaber__AvatarCore__IOptionalAvatarDataProvider() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IOptionalAvatarDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::ConnectedPlayerOptionalAvatarDataProvider::ConnectedPlayerOptionalAvatarDataProvider() {}
