#pragma once
// IWYU pragma private; include "GlobalNamespace\ILobbyStateDataModel.hpp"
#include "GlobalNamespace/zzzz__ILobbyStateDataModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.add_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ILobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::ILobbyStateDataModel::add_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.remove_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ILobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::ILobbyStateDataModel::remove_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.add_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ILobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::ILobbyStateDataModel::add_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.remove_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ILobbyStateDataModel::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::ILobbyStateDataModel::remove_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.get_isConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ILobbyStateDataModel::*)()>(&::GlobalNamespace::ILobbyStateDataModel::get_isConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.get_localPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer* (::GlobalNamespace::ILobbyStateDataModel::*)()>(
    &::GlobalNamespace::ILobbyStateDataModel::get_localPlayer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.get_connectedPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* (::GlobalNamespace::ILobbyStateDataModel::*)()>(
    &::GlobalNamespace::ILobbyStateDataModel::get_connectedPlayers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.get_rawConnectedPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* (::GlobalNamespace::ILobbyStateDataModel::*)()>(
    &::GlobalNamespace::ILobbyStateDataModel::get_rawConnectedPlayers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.get_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::ILobbyStateDataModel::*)()>(
    &::GlobalNamespace::ILobbyStateDataModel::get_configuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ILobbyStateDataModel::*)()>(&::GlobalNamespace::ILobbyStateDataModel::Activate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ILobbyStateDataModel::*)()>(&::GlobalNamespace::ILobbyStateDataModel::Deactivate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ILobbyStateDataModel.GetPlayerById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::ILobbyStateDataModel::*)(::StringW)>(
    &::GlobalNamespace::ILobbyStateDataModel::GetPlayerById)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 11 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ILobbyStateDataModel::add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ILobbyStateDataModel::remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ILobbyStateDataModel::add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ILobbyStateDataModel::remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ILobbyStateDataModel::get_isConnected() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::ILobbyStateDataModel::get_localPlayer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberConnectedPlayer*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* GlobalNamespace::ILobbyStateDataModel::get_connectedPlayers() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* GlobalNamespace::ILobbyStateDataModel::get_rawConnectedPlayers() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::ILobbyStateDataModel::get_configuration() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
inline void GlobalNamespace::ILobbyStateDataModel::Activate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ILobbyStateDataModel::Deactivate() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::ILobbyStateDataModel::GetPlayerById(::StringW userId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILobbyStateDataModel*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*>(this, ___internal_method, userId);
}
