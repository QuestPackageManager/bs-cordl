#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyGameStateModel.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyGameStateModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateModel.get_gameState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerGameState (::GlobalNamespace::LobbyGameStateModel::*)()>(&::GlobalNamespace::LobbyGameStateModel::get_gameState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3732ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(), { "get_gameState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateModel.add_gameStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateModel::*)(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*)>(
    &::GlobalNamespace::LobbyGameStateModel::add_gameStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3732eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                             { "add_gameStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateModel.remove_gameStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateModel::*)(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*)>(
    &::GlobalNamespace::LobbyGameStateModel::remove_gameStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3732f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                             { "remove_gameStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateModel.add_gameStateDidChangeAlwaysSentEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateModel::*)(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*)>(
    &::GlobalNamespace::LobbyGameStateModel::add_gameStateDidChangeAlwaysSentEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3733030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                             { "add_gameStateDidChangeAlwaysSentEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateModel.remove_gameStateDidChangeAlwaysSentEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateModel::*)(::System::Action_1<::GlobalNamespace::MultiplayerGameState>*)>(
    &::GlobalNamespace::LobbyGameStateModel::remove_gameStateDidChangeAlwaysSentEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x37330f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                             { "remove_gameStateDidChangeAlwaysSentEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateModel.SetGameState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateModel::*)(::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::LobbyGameStateModel::SetGameState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37331b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(), { "SetGameState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateModel.SetGameStateWithoutNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateModel::*)(::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::LobbyGameStateModel::SetGameStateWithoutNotification)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3733228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                                                           { "SetGameStateWithoutNotification", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateModel.SetGameState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateModel::*)(::GlobalNamespace::MultiplayerGameState, bool)>(
    &::GlobalNamespace::LobbyGameStateModel::SetGameState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x37331b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                             { "SetGameState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyGameStateModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyGameStateModel::*)()>(&::GlobalNamespace::LobbyGameStateModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3733254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*& GlobalNamespace::LobbyGameStateModel::__cordl_internal_get_gameStateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameStateDidChangeEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>* const& GlobalNamespace::LobbyGameStateModel::__cordl_internal_get_gameStateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameStateDidChangeEvent;
}
constexpr void GlobalNamespace::LobbyGameStateModel::__cordl_internal_set_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameStateDidChangeEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>*& GlobalNamespace::LobbyGameStateModel::__cordl_internal_get_gameStateDidChangeAlwaysSentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameStateDidChangeAlwaysSentEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerGameState>* const& GlobalNamespace::LobbyGameStateModel::__cordl_internal_get_gameStateDidChangeAlwaysSentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameStateDidChangeAlwaysSentEvent;
}
constexpr void GlobalNamespace::LobbyGameStateModel::__cordl_internal_set_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameStateDidChangeAlwaysSentEvent = value;
}
constexpr ::GlobalNamespace::MultiplayerGameState& GlobalNamespace::LobbyGameStateModel::__cordl_internal_get__gameState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameState;
}
constexpr ::GlobalNamespace::MultiplayerGameState const& GlobalNamespace::LobbyGameStateModel::__cordl_internal_get__gameState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameState;
}
constexpr void GlobalNamespace::LobbyGameStateModel::__cordl_internal_set__gameState(::GlobalNamespace::MultiplayerGameState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameState = value;
}
inline ::GlobalNamespace::MultiplayerGameState GlobalNamespace::LobbyGameStateModel::get_gameState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(), { "get_gameState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerGameState>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyGameStateModel::add_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                           { "add_gameStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateModel::remove_gameStateDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                           { "remove_gameStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateModel::add_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                           { "add_gameStateDidChangeAlwaysSentEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateModel::remove_gameStateDidChangeAlwaysSentEvent(::System::Action_1<::GlobalNamespace::MultiplayerGameState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                           { "remove_gameStateDidChangeAlwaysSentEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerGameState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyGameStateModel::SetGameState(::GlobalNamespace::MultiplayerGameState newGameState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(), { "SetGameState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameState);
}
inline void GlobalNamespace::LobbyGameStateModel::SetGameStateWithoutNotification(::GlobalNamespace::MultiplayerGameState newGameState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(),
                                                                                         { "SetGameStateWithoutNotification", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameState);
}
inline void GlobalNamespace::LobbyGameStateModel::SetGameState(::GlobalNamespace::MultiplayerGameState newGameState, bool sendNotification) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(), { "SetGameState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameState, sendNotification);
}
inline void GlobalNamespace::LobbyGameStateModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyGameStateModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyGameStateModel* GlobalNamespace::LobbyGameStateModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyGameStateModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyGameStateModel::LobbyGameStateModel() {}
