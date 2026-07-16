#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerMockSettings.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerMockSettings_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerSettings_def.hpp"
#include "GlobalNamespace/zzzz__MockServerSettings_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMockSettings.get_quickplayServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MockServerSettings* (::GlobalNamespace::MultiplayerMockSettings::*)()>(
    &::GlobalNamespace::MultiplayerMockSettings::get_quickplayServer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c8cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_quickplayServer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMockSettings.get_localPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MockPlayerSettings* (::GlobalNamespace::MultiplayerMockSettings::*)()>(
    &::GlobalNamespace::MultiplayerMockSettings::get_localPlayer)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x59c8cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_localPlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMockSettings.get_quickPlaySetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::QuickPlaySetupData* (::GlobalNamespace::MultiplayerMockSettings::*)()>(
    &::GlobalNamespace::MultiplayerMockSettings::get_quickPlaySetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c8da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_quickPlaySetupData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMockSettings.set_quickPlaySetupData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerMockSettings::*)(::GlobalNamespace::QuickPlaySetupData*)>(
    &::GlobalNamespace::MultiplayerMockSettings::set_quickPlaySetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c8da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(),
                                                                                           { "set_quickPlaySetupData", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySetupData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMockSettings.get_multiplayerStatusData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerStatusData* (::GlobalNamespace::MultiplayerMockSettings::*)()>(
    &::GlobalNamespace::MultiplayerMockSettings::get_multiplayerStatusData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c8db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_multiplayerStatusData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMockSettings.set_multiplayerStatusData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerMockSettings::*)(::GlobalNamespace::MultiplayerStatusData*)>(
    &::GlobalNamespace::MultiplayerMockSettings::set_multiplayerStatusData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c8db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(),
                                                                                           { "set_multiplayerStatusData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerStatusData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMockSettings.get_otherPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* (::GlobalNamespace::MultiplayerMockSettings::*)()>(
    &::GlobalNamespace::MultiplayerMockSettings::get_otherPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c8dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_otherPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMockSettings.SharedSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MultiplayerMockSettings> (*)()>(&::GlobalNamespace::MultiplayerMockSettings::SharedSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59c8dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "SharedSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMockSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerMockSettings::*)()>(&::GlobalNamespace::MultiplayerMockSettings::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59c8dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MockPlayerSettings*& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__localPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
constexpr ::GlobalNamespace::MockPlayerSettings* const& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__localPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
constexpr void GlobalNamespace::MultiplayerMockSettings::__cordl_internal_set__localPlayer(::GlobalNamespace::MockPlayerSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayer = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>*& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__otherPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* const& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__otherPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherPlayers;
}
constexpr void GlobalNamespace::MultiplayerMockSettings::__cordl_internal_set__otherPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____otherPlayers = value;
}
constexpr ::GlobalNamespace::MockServerSettings*& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__quickplayServer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickplayServer;
}
constexpr ::GlobalNamespace::MockServerSettings* const& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__quickplayServer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickplayServer;
}
constexpr void GlobalNamespace::MultiplayerMockSettings::__cordl_internal_set__quickplayServer(::GlobalNamespace::MockServerSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quickplayServer = value;
}
constexpr ::GlobalNamespace::MultiplayerStatusData*& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__multiplayerStatusData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusData;
}
constexpr ::GlobalNamespace::MultiplayerStatusData* const& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__multiplayerStatusData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusData;
}
constexpr void GlobalNamespace::MultiplayerMockSettings::__cordl_internal_set__multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerStatusData = value;
}
constexpr ::GlobalNamespace::QuickPlaySetupData*& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__quickPlaySetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySetupData;
}
constexpr ::GlobalNamespace::QuickPlaySetupData* const& GlobalNamespace::MultiplayerMockSettings::__cordl_internal_get__quickPlaySetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySetupData;
}
constexpr void GlobalNamespace::MultiplayerMockSettings::__cordl_internal_set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____quickPlaySetupData = value;
}
inline ::GlobalNamespace::MockServerSettings* GlobalNamespace::MultiplayerMockSettings::get_quickplayServer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_quickplayServer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MockServerSettings*>(this, ___internal_method);
}
inline ::GlobalNamespace::MockPlayerSettings* GlobalNamespace::MultiplayerMockSettings::get_localPlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_localPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MockPlayerSettings*>(this, ___internal_method);
}
inline ::GlobalNamespace::QuickPlaySetupData* GlobalNamespace::MultiplayerMockSettings::get_quickPlaySetupData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_quickPlaySetupData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::QuickPlaySetupData*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerMockSettings::set_quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(),
                                                                                         { "set_quickPlaySetupData", {}, { ::i2c::type_of<::GlobalNamespace::QuickPlaySetupData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerStatusData* GlobalNamespace::MultiplayerMockSettings::get_multiplayerStatusData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_multiplayerStatusData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerStatusData*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerMockSettings::set_multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(),
                                                                                         { "set_multiplayerStatusData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerStatusData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* GlobalNamespace::MultiplayerMockSettings::get_otherPlayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "get_otherPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::MultiplayerMockSettings> GlobalNamespace::MultiplayerMockSettings::SharedSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { "SharedSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MultiplayerMockSettings>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MultiplayerMockSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerMockSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerMockSettings* GlobalNamespace::MultiplayerMockSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerMockSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerMockSettings::MultiplayerMockSettings() {}
