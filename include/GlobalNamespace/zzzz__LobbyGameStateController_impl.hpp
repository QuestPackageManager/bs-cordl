#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyGameStateController.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_impl.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__LevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__MenuTransitionsHelper_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyState_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController___c::*)()>(&::GlobalNamespace::LobbyGameStateController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bcccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController___c._PredictCountdownEndTime_b__100_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyGameStateController___c::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>)>(&::GlobalNamespace::LobbyGameStateController___c::_PredictCountdownEndTime_b__100_0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x59bccd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c*>(),
                            { "<PredictCountdownEndTime>b__100_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LobbyGameStateController___c::setStaticF___9(::GlobalNamespace::LobbyGameStateController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LobbyGameStateController___c*, "<>9", ::GlobalNamespace::LobbyGameStateController___c*>(
      std::forward<::GlobalNamespace::LobbyGameStateController___c*>(value));
}
inline ::GlobalNamespace::LobbyGameStateController___c* GlobalNamespace::LobbyGameStateController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LobbyGameStateController___c*, "<>9", ::GlobalNamespace::LobbyGameStateController___c*>();
}
inline void
GlobalNamespace::LobbyGameStateController___c::setStaticF___9__100_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>, bool>*, "<>9__100_0",
                                    ::GlobalNamespace::LobbyGameStateController___c*>(
      std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>, bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>, bool>* GlobalNamespace::LobbyGameStateController___c::getStaticF___9__100_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>, bool>*, "<>9__100_0",
                                           ::GlobalNamespace::LobbyGameStateController___c*>();
}
inline void GlobalNamespace::LobbyGameStateController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController___c::_PredictCountdownEndTime_b__100_0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*> pair) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c*>(),
                          { "<PredictCountdownEndTime>b__100_0", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pair);
}
inline ::GlobalNamespace::LobbyGameStateController___c* GlobalNamespace::LobbyGameStateController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyGameStateController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyGameStateController___c::LobbyGameStateController___c() {}
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::*)()>(
    &::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59bb304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0._GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::*)(::StringW, ::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::_GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x59bcdf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0*>(),
                         { "<GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0._GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::*)(::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(
        &::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::_GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x59bd068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0*>(),
                                                             { "<GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0._GetGameStateAndConfigurationAsync_b__2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::*)(
    ::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*)>(&::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::_GetGameStateAndConfigurationAsync_b__2)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x59bd268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0*>(),
                                                { "<GetGameStateAndConfigurationAsync>b__2", {}, { ::i2c::type_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LobbyGameStateController*& GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::LobbyGameStateController* const& GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::__cordl_internal_set___4__this(::GlobalNamespace::LobbyGameStateController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::__cordl_internal_get_getGameStateAsyncTcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameStateAsyncTcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::__cordl_internal_get_getGameStateAsyncTcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameStateAsyncTcs;
}
constexpr void GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::__cordl_internal_set_getGameStateAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getGameStateAsyncTcs = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::__cordl_internal_get_getPlayerPermissionAsyncTcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getPlayerPermissionAsyncTcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::__cordl_internal_get_getPlayerPermissionAsyncTcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getPlayerPermissionAsyncTcs;
}
constexpr void GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::__cordl_internal_set_getPlayerPermissionAsyncTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getPlayerPermissionAsyncTcs = value;
}
inline void GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::_GetGameStateAndConfigurationAsync_g__HandleSetMultiplayerGameState_0(
    ::StringW userId, ::GlobalNamespace::MultiplayerGameState newMultiplayerGameState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0*>(),
                       { "<GetGameStateAndConfigurationAsync>g__HandleSetMultiplayerGameState|0", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, newMultiplayerGameState);
}
inline void GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::_GetGameStateAndConfigurationAsync_g__HandleSetPlayerPermissionConfiguration_1(
    ::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersLobbyPermissionConfiguration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0*>(),
                                                           { "<GetGameStateAndConfigurationAsync>g__HandleSetPlayerPermissionConfiguration|1",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playersLobbyPermissionConfiguration);
}
inline bool GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::_GetGameStateAndConfigurationAsync_b__2(::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0*>(),
                                              { "<GetGameStateAndConfigurationAsync>b__2", {}, { ::i2c::type_of<::GlobalNamespace::PlayerLobbyPermissionConfigurationNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0* GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyGameStateController___c__DisplayClass99_0::LobbyGameStateController___c__DisplayClass99_0() {}
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_selectedLevelGameplaySetupDataChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(
    &::GlobalNamespace::LobbyGameStateController::add_selectedLevelGameplaySetupDataChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b804c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                { "add_selectedLevelGameplaySetupDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_selectedLevelGameplaySetupDataChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_selectedLevelGameplaySetupDataChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b810c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                { "remove_selectedLevelGameplaySetupDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_gameStartedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(
    &::GlobalNamespace::LobbyGameStateController::add_gameStartedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b81cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "add_gameStartedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_gameStartedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_gameStartedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b828c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "remove_gameStartedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_gameStartCancelledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::add_gameStartCancelledEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b834c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_gameStartCancelledEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_gameStartCancelledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_gameStartCancelledEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b83f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_gameStartCancelledEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_countdownStartedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::add_countdownStartedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b84a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_countdownStartedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_countdownStartedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_countdownStartedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b8550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_countdownStartedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_countdownCancelledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::add_countdownCancelledEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b85fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_countdownCancelledEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_countdownCancelledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_countdownCancelledEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b86a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_countdownCancelledEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_songStillDownloadingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::add_songStillDownloadingEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b8754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_songStillDownloadingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_songStillDownloadingEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_songStillDownloadingEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b8800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_songStillDownloadingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_startTimeChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::add_startTimeChangedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b88ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_startTimeChangedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_startTimeChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_startTimeChangedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b8958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_startTimeChangedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*)>(
        &::GlobalNamespace::LobbyGameStateController::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b8a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
            { "add_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*)>(
        &::GlobalNamespace::LobbyGameStateController::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b8ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                         { "remove_levelFinishedEvent",
                                           {},
                                           { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_levelDidGetDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::LobbyGameStateController::add_levelDidGetDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b8b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "add_levelDidGetDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_levelDidGetDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_levelDidGetDisconnectedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b8c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "remove_levelDidGetDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_lobbyDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::add_lobbyDisconnectedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b8d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_lobbyDisconnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_lobbyDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_lobbyDisconnectedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b8db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_lobbyDisconnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_beforeSceneSwitchCallbackEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::add_beforeSceneSwitchCallbackEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b8e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_beforeSceneSwitchCallbackEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_beforeSceneSwitchCallbackEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_beforeSceneSwitchCallbackEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59b8f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_beforeSceneSwitchCallbackEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_lobbyStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*)>(
    &::GlobalNamespace::LobbyGameStateController::add_lobbyStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b8fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "add_lobbyStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_lobbyStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_lobbyStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b9074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "remove_lobbyStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_startButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*)>(
    &::GlobalNamespace::LobbyGameStateController::add_startButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b9134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "add_startButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_startButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::CannotStartGameReason>*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_startButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b91f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "remove_startButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.add_playerMissingEntitlementsChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(
    &::GlobalNamespace::LobbyGameStateController::add_playerMissingEntitlementsChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b92b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                            { "add_playerMissingEntitlementsChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.remove_playerMissingEntitlementsChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(
    &::GlobalNamespace::LobbyGameStateController::remove_playerMissingEntitlementsChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59b9374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                            { "remove_playerMissingEntitlementsChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_predictedCountdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_predictedCountdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_predictedCountdownEndTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_startTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b943c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_startTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_startTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(int64_t)>(&::GlobalNamespace::LobbyGameStateController::set_startTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59b9444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_startTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_levelStartInitiated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_levelStartInitiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_levelStartInitiated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_levelStartInitiated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(bool)>(&::GlobalNamespace::LobbyGameStateController::set_levelStartInitiated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b946c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_levelStartInitiated", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_selectedLevelGameplaySetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILevelGameplaySetupData* (::GlobalNamespace::LobbyGameStateController::*)()>(
    &::GlobalNamespace::LobbyGameStateController::get_selectedLevelGameplaySetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_selectedLevelGameplaySetupData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_countdownStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_countdownStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b947c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_countdownStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_countdownStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(bool)>(&::GlobalNamespace::LobbyGameStateController::set_countdownStarted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_countdownStarted", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_countdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_countdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b948c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_countdownEndTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_countdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(int64_t)>(&::GlobalNamespace::LobbyGameStateController::set_countdownEndTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b9494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_countdownEndTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerLobbyState (::GlobalNamespace::LobbyGameStateController::*)()>(
    &::GlobalNamespace::LobbyGameStateController::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b949c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::MultiplayerLobbyState)>(
    &::GlobalNamespace::LobbyGameStateController::set_state)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59b94a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_state", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_cannotStartGameReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CannotStartGameReason (::GlobalNamespace::LobbyGameStateController::*)()>(
    &::GlobalNamespace::LobbyGameStateController::get_cannotStartGameReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b94d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_cannotStartGameReason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_isDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::get_isDisconnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b94d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_isDisconnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_isDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(bool)>(&::GlobalNamespace::LobbyGameStateController::set_isDisconnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b94e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_isDisconnected", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.get_disconnectedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::DisconnectedReason (::GlobalNamespace::LobbyGameStateController::*)()>(
    &::GlobalNamespace::LobbyGameStateController::get_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b94e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_disconnectedReason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.set_disconnectedReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::LobbyGameStateController::set_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59b94f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                           { "set_disconnectedReason", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::Activate)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0x59b94f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "Activate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::Deactivate)> {
  constexpr static std::size_t size = 0x980;
  constexpr static std::size_t addrs = 0x59b9dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "Deactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59ba750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StartListeningToGameStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::StartListeningToGameStart)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x59ba754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "StartListeningToGameStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.GetCurrentLevelIfGameStarted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::GetCurrentLevelIfGameStarted)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59bae24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "GetCurrentLevelIfGameStarted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.ClearDisconnectedState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::ClearDisconnectedState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59ba740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "ClearDisconnectedState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.GetGameStateAndConfigurationAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::LobbyGameStateController::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::LobbyGameStateController::GetGameStateAndConfigurationAsync)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x59baecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                           { "GetGameStateAndConfigurationAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.PredictCountdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::PredictCountdownEndTime)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x59bb308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "PredictCountdownEndTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.IsCloseToStartGame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::IsCloseToStartGame)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x59bb4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "IsCloseToStartGame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerSessionManagerDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerDisconnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bb57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "HandleMultiplayerSessionManagerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerSessionManagerConnectionOwnerStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerConnectionOwnerStateChanged)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59bb5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "HandleMultiplayerSessionManagerConnectionOwnerStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StopListeningToGameStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::StopListeningToGameStart)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x59bb6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "StopListeningToGameStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerStartedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(
    ::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t)>(&::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerStartedLevel)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x59bb930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                           { "HandleMenuRpcManagerStartedLevel",
                                                                                             {},
                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerCancelledLevelStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelledLevelStart)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59bbc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleMenuRpcManagerCancelledLevelStart", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetCountdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, int64_t)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetCountdownEndTime)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x59bbdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "HandleMenuRpcManagerSetCountdownEndTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerCancelCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelCountdown)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x59bc028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleMenuRpcManagerCancelCountdown", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetStartGameTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, int64_t)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetStartGameTime)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59bc25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "HandleMenuRpcManagerSetStartGameTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleSetIsStartButtonEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::CannotStartGameReason)>(
    &::GlobalNamespace::LobbyGameStateController::HandleSetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59bc2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "HandleSetIsStartButtonEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59bc2cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
            { "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleStartTimeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::HandleStartTimeChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59bc2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleStartTimeChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelLoaderStillDownloadingSong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(
    &::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderStillDownloadingSong)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59bc30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleMultiplayerLevelLoaderStillDownloadingSong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetSelectedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59bc328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                { "HandleMenuRpcManagerSetSelectedBeatmap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerSetSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59bc380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                { "HandleMenuRpcManagerSetSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerClearSelectedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59bc3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleMenuRpcManagerClearSelectedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMenuRpcManagerClearSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::StringW)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59bc3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                           { "HandleMenuRpcManagerClearSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelLoaderCountdownFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderCountdownFinished)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x59bc444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
            { "HandleMultiplayerLevelLoaderCountdownFinished", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StartMultiplayerLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::ILevelGameplaySetupData*, ::GlobalNamespace::IBeatmapLevelData*,
                                                                                                             ::System::Action*)>(&::GlobalNamespace::LobbyGameStateController::StartMultiplayerLevel)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x59bc794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                            { "StartMultiplayerLevel",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(
    ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*)>(&::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x59bcaec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                         { "HandleMultiplayerLevelDidFinish",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.HandleMultiplayerLevelDidDisconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidDisconnect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59bcb80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                             { "HandleMultiplayerLevelDidDisconnect", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController.StopLoading
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::StopLoading)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59bbcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "StopLoading", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateController::*)()>(&::GlobalNamespace::LobbyGameStateController::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59bcc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyPlayersDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr ::GlobalNamespace::ILobbyPlayersDataModel* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyPlayersDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayersDataModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayersDataModel = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr ::GlobalNamespace::IMenuRpcManager*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__menuRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager;
}
constexpr ::GlobalNamespace::IMenuRpcManager* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__menuRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuRpcManager = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::MultiplayerLevelLoader*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__multiplayerLevelLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelLoader;
}
constexpr ::GlobalNamespace::MultiplayerLevelLoader* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__multiplayerLevelLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerLevelLoader;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__multiplayerLevelLoader(::GlobalNamespace::MultiplayerLevelLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerLevelLoader = value;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__menuTransitionsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr ::GlobalNamespace::MenuTransitionsHelper* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__menuTransitionsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuTransitionsHelper;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuTransitionsHelper = value;
}
constexpr ::GlobalNamespace::LobbyGameStateModel*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyGameStateModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr ::GlobalNamespace::LobbyGameStateModel* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyGameStateModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyGameStateModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__lobbyGameStateModel(::GlobalNamespace::LobbyGameStateModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyGameStateModel = value;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyPlayerPermissionsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__lobbyPlayerPermissionsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayerPermissionsModel = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicCollection = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__environmentsListModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__environmentsListModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsListModel;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentsListModel = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_selectedLevelGameplaySetupDataChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLevelGameplaySetupDataChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_selectedLevelGameplaySetupDataChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLevelGameplaySetupDataChangedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectedLevelGameplaySetupDataChangedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_gameStartedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameStartedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_gameStartedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameStartedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameStartedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_gameStartCancelledEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameStartCancelledEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_gameStartCancelledEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameStartCancelledEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_gameStartCancelledEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameStartCancelledEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_countdownStartedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countdownStartedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_countdownStartedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countdownStartedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_countdownStartedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___countdownStartedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_countdownCancelledEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countdownCancelledEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_countdownCancelledEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___countdownCancelledEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_countdownCancelledEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___countdownCancelledEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_songStillDownloadingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songStillDownloadingEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_songStillDownloadingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songStillDownloadingEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_songStillDownloadingEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songStillDownloadingEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_startTimeChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startTimeChangedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_startTimeChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startTimeChangedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_startTimeChangedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startTimeChangedEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*&
GlobalNamespace::LobbyGameStateController::__cordl_internal_get_levelFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* const&
GlobalNamespace::LobbyGameStateController::__cordl_internal_get_levelFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_levelFinishedEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelFinishedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_levelDidGetDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDidGetDisconnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_levelDidGetDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDidGetDisconnectedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelDidGetDisconnectedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_lobbyDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyDisconnectedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_lobbyDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyDisconnectedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_lobbyDisconnectedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lobbyDisconnectedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_beforeSceneSwitchCallbackEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeSceneSwitchCallbackEvent;
}
constexpr ::System::Action* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_beforeSceneSwitchCallbackEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beforeSceneSwitchCallbackEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_beforeSceneSwitchCallbackEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beforeSceneSwitchCallbackEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_lobbyStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyStateChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_lobbyStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lobbyStateChangedEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lobbyStateChangedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::CannotStartGameReason>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_startButtonEnabledEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startButtonEnabledEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::CannotStartGameReason>* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_startButtonEnabledEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startButtonEnabledEvent;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startButtonEnabledEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get_playerMissingEntitlementsChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerMissingEntitlementsChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* const&
GlobalNamespace::LobbyGameStateController::__cordl_internal_get_playerMissingEntitlementsChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerMissingEntitlementsChangedEvent;
}
constexpr void
GlobalNamespace::LobbyGameStateController::__cordl_internal_set_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerMissingEntitlementsChangedEvent = value;
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__levelStartInitiated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartInitiated_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__levelStartInitiated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartInitiated_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__levelStartInitiated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelStartInitiated_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__countdownStarted_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownStarted_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__countdownStarted_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownStarted_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__countdownStarted_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownStarted_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__countdownEndTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownEndTime_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__countdownEndTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countdownEndTime_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__countdownEndTime_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countdownEndTime_k__BackingField = value;
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__isDisconnected_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisconnected_k__BackingField;
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__isDisconnected_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDisconnected_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__isDisconnected_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDisconnected_k__BackingField = value;
}
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__disconnectedReason_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason_k__BackingField;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__disconnectedReason_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason_k__BackingField;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__disconnectedReason_k__BackingField(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectedReason_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__predictedStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____predictedStartTime;
}
constexpr int64_t const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__predictedStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____predictedStartTime;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__predictedStartTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____predictedStartTime = value;
}
constexpr int64_t& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__startTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr int64_t const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__startTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__startTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime = value;
}
constexpr bool& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__levelStartedOnTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartedOnTime;
}
constexpr bool const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__levelStartedOnTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelStartedOnTime;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__levelStartedOnTime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelStartedOnTime = value;
}
constexpr ::GlobalNamespace::MultiplayerLobbyState& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::MultiplayerLobbyState const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__state(::GlobalNamespace::MultiplayerLobbyState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::GlobalNamespace::CannotStartGameReason& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__cannotStartGameReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cannotStartGameReason;
}
constexpr ::GlobalNamespace::CannotStartGameReason const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__cannotStartGameReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cannotStartGameReason;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__cannotStartGameReason(::GlobalNamespace::CannotStartGameReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cannotStartGameReason = value;
}
constexpr ::GlobalNamespace::LevelGameplaySetupData*& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__selectedLevelGameplaySetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedLevelGameplaySetupData;
}
constexpr ::GlobalNamespace::LevelGameplaySetupData* const& GlobalNamespace::LobbyGameStateController::__cordl_internal_get__selectedLevelGameplaySetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedLevelGameplaySetupData;
}
constexpr void GlobalNamespace::LobbyGameStateController::__cordl_internal_set__selectedLevelGameplaySetupData(::GlobalNamespace::LevelGameplaySetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedLevelGameplaySetupData = value;
}
inline void GlobalNamespace::LobbyGameStateController::add_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                              { "add_selectedLevelGameplaySetupDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_selectedLevelGameplaySetupDataChangedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                              { "remove_selectedLevelGameplaySetupDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "add_gameStartedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_gameStartedEvent(::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "remove_gameStartedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ILevelGameplaySetupData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_gameStartCancelledEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_gameStartCancelledEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_gameStartCancelledEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_gameStartCancelledEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_countdownStartedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_countdownStartedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_countdownStartedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_countdownStartedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_countdownCancelledEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_countdownCancelledEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_countdownCancelledEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_countdownCancelledEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_songStillDownloadingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_songStillDownloadingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_songStillDownloadingEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_songStillDownloadingEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_startTimeChangedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_startTimeChangedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_startTimeChangedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_startTimeChangedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_levelFinishedEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
          { "add_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_levelFinishedEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
          { "remove_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "add_levelDidGetDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_levelDidGetDisconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "remove_levelDidGetDisconnectedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_lobbyDisconnectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_lobbyDisconnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_lobbyDisconnectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_lobbyDisconnectedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_beforeSceneSwitchCallbackEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "add_beforeSceneSwitchCallbackEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_beforeSceneSwitchCallbackEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "remove_beforeSceneSwitchCallbackEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "add_lobbyStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_lobbyStateChangedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "remove_lobbyStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerLobbyState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "add_startButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_startButtonEnabledEvent(::System::Action_1<::GlobalNamespace::CannotStartGameReason>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "remove_startButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::CannotStartGameReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::add_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                       { "add_playerMissingEntitlementsChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::remove_playerMissingEntitlementsChangedEvent(::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                          { "remove_playerMissingEntitlementsChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::LobbyGameStateController::get_predictedCountdownEndTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_predictedCountdownEndTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::LobbyGameStateController::get_startTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_startTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_startTime(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_startTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::LobbyGameStateController::get_levelStartInitiated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_levelStartInitiated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_levelStartInitiated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_levelStartInitiated", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ILevelGameplaySetupData* GlobalNamespace::LobbyGameStateController::get_selectedLevelGameplaySetupData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_selectedLevelGameplaySetupData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILevelGameplaySetupData*>(this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController::get_countdownStarted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_countdownStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_countdownStarted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_countdownStarted", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::LobbyGameStateController::get_countdownEndTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_countdownEndTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_countdownEndTime(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_countdownEndTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerLobbyState GlobalNamespace::LobbyGameStateController::get_state() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLobbyState>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_state(::GlobalNamespace::MultiplayerLobbyState value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_state", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLobbyState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::CannotStartGameReason GlobalNamespace::LobbyGameStateController::get_cannotStartGameReason() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_cannotStartGameReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CannotStartGameReason>(this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController::get_isDisconnected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_isDisconnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_isDisconnected(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "set_isDisconnected", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::DisconnectedReason GlobalNamespace::LobbyGameStateController::get_disconnectedReason() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "get_disconnectedReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                         { "set_disconnectedReason", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateController::Activate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "Activate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "Deactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::StartListeningToGameStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "StartListeningToGameStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::GetCurrentLevelIfGameStarted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "GetCurrentLevelIfGameStarted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::ClearDisconnectedState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "ClearDisconnectedState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::LobbyGameStateController::GetGameStateAndConfigurationAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                         { "GetGameStateAndConfigurationAsync", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::LobbyGameStateController::PredictCountdownEndTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "PredictCountdownEndTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LobbyGameStateController::IsCloseToStartGame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "IsCloseToStartGame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "HandleMultiplayerSessionManagerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerSessionManagerConnectionOwnerStateChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "HandleMultiplayerSessionManagerConnectionOwnerStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
inline void GlobalNamespace::LobbyGameStateController::StopListeningToGameStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "StopListeningToGameStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerStartedLevel(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeyNetSerializable,
                                                                                        ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int64_t startTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                         { "HandleMenuRpcManagerStartedLevel",
                                                                                           {},
                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, beatmapKeyNetSerializable, gameplayModifiers, startTime);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelledLevelStart(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleMenuRpcManagerCancelledLevelStart", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetCountdownEndTime(::StringW userId, int64_t countdownTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "HandleMenuRpcManagerSetCountdownEndTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, countdownTime);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerCancelCountdown(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleMenuRpcManagerCancelCountdown", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetStartGameTime(::StringW userId, int64_t startTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                         { "HandleMenuRpcManagerSetStartGameTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, startTime);
}
inline void GlobalNamespace::LobbyGameStateController::HandleSetIsStartButtonEnabled(::StringW userId, ::GlobalNamespace::CannotStartGameReason cannotStartGameReason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                           { "HandleSetIsStartButtonEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, cannotStartGameReason);
}
inline void
GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel(::StringW userId,
                                                                                                    ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
          { "HandleMenuRpcManagerSetPlayersMissingEntitlementsToLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playersMissingEntitlements);
}
inline void GlobalNamespace::LobbyGameStateController::HandleStartTimeChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleStartTimeChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderStillDownloadingSong() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleMultiplayerLevelLoaderStillDownloadingSong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                              { "HandleMenuRpcManagerSetSelectedBeatmap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, beatmapKeySerializable);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerSetSelectedGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                              { "HandleMenuRpcManagerSetSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, modifiers);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedBeatmap(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "HandleMenuRpcManagerClearSelectedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMenuRpcManagerClearSelectedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                         { "HandleMenuRpcManagerClearSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelLoaderCountdownFinished(::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData,
                                                                                                     ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
          { "HandleMultiplayerLevelLoaderCountdownFinished", {}, { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplaySetupData, beatmapLevelData);
}
inline void GlobalNamespace::LobbyGameStateController::StartMultiplayerLevel(::GlobalNamespace::ILevelGameplaySetupData* gameplaySetupData, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                             ::System::Action* beforeSceneSwitchCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                          { "StartMultiplayerLevel",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::ILevelGameplaySetupData*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplaySetupData, beatmapLevelData, beforeSceneSwitchCallback);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                                                       ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                              { "HandleMultiplayerLevelDidFinish",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerLevelScenesTransitionSetupData, multiplayerResultsData);
}
inline void GlobalNamespace::LobbyGameStateController::HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(),
                                                                                         { "HandleMultiplayerLevelDidDisconnect", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::LobbyGameStateController::StopLoading() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { "StopLoading", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyGameStateController* GlobalNamespace::LobbyGameStateController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyGameStateController*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILobbyGameStateController"
constexpr GlobalNamespace::LobbyGameStateController::operator ::GlobalNamespace::ILobbyGameStateController*() noexcept {
  return static_cast<::GlobalNamespace::ILobbyGameStateController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILobbyGameStateController"
constexpr ::GlobalNamespace::ILobbyGameStateController* GlobalNamespace::LobbyGameStateController::i___GlobalNamespace__ILobbyGameStateController() noexcept {
  return static_cast<::GlobalNamespace::ILobbyGameStateController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILobbyGameStateControllerBase"
constexpr GlobalNamespace::LobbyGameStateController::operator ::GlobalNamespace::ILobbyGameStateControllerBase*() noexcept {
  return static_cast<::GlobalNamespace::ILobbyGameStateControllerBase*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILobbyGameStateControllerBase"
constexpr ::GlobalNamespace::ILobbyGameStateControllerBase* GlobalNamespace::LobbyGameStateController::i___GlobalNamespace__ILobbyGameStateControllerBase() noexcept {
  return static_cast<::GlobalNamespace::ILobbyGameStateControllerBase*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::LobbyGameStateController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LobbyGameStateController::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyGameStateController::LobbyGameStateController() {}
