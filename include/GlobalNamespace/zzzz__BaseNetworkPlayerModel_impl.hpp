#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionInitParams_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModelPartyConfig_1_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccb1f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::__cordl_internal_get_selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::__cordl_internal_get_selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionMask;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::__cordl_internal_set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionMask = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::__cordl_internal_get_configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::__cordl_internal_get_configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___configuration;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::__cordl_internal_set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___configuration = value;
}
constexpr ::GlobalNamespace::INetworkPlayerModel*& GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::__cordl_internal_get_partyManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyManager;
}
constexpr ::GlobalNamespace::INetworkPlayerModel* const& GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::__cordl_internal_get_partyManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyManager;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::__cordl_internal_set_partyManager(::GlobalNamespace::INetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partyManager = value;
}
inline void GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig* GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig::BaseNetworkPlayerModel_PartyConfig() {}
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::*)(int32_t)>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ccaf58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccb1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ccb200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56.System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::INetworkPlayer* (::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccb218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ccb220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccb258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56.System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::*)()>(
        &::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ccb260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccb2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::GlobalNamespace::INetworkPlayer* const& GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::__cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
inline void GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56* GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56::BaseNetworkPlayerModel__GetOtherPlayers_d__56() {}
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::*)(int32_t)>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ccaed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccb2f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ccb2f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55.System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::INetworkPlayer* (::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccb30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ccb314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccb34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55.System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::*)()>(
        &::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ccb354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(),
                                                                                           { "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccb3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::GlobalNamespace::INetworkPlayer*& GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::GlobalNamespace::INetworkPlayer* const& GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::__cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
inline void GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::INetworkPlayer* GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55* GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*
GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55::BaseNetworkPlayerModel__GetPartyPlayers_d__55() {}
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_connectedPlayerManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatSaberConnectedPlayerManager* (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel::get_connectedPlayerManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cca4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_connectedPlayerManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_partyManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::INetworkPlayerModel* (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel::get_partyManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cca4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_partyManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_isConnectedOrConnecting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::get_isConnectedOrConnecting)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cca4d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_isConnectedOrConnecting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cca544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_isConnectionOwner", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_discoveryEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::get_discoveryEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cca5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.set_discoveryEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(bool)>(&::GlobalNamespace::BaseNetworkPlayerModel::set_discoveryEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cca5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_hasNetworkingFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::get_hasNetworkingFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cca5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_currentPartySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::get_currentPartySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cca5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cca5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_selectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel::get_selectionMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cca5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.add_connectedPlayerManagerCreatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cca5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(),
                                                             { "add_connectedPlayerManagerCreatedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.remove_connectedPlayerManagerCreatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cca6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(),
                                                             { "remove_connectedPlayerManagerCreatedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.add_connectedPlayerManagerDestroyedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cca76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(),
                                                             { "add_connectedPlayerManagerDestroyedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.remove_connectedPlayerManagerDestroyedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cca82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(),
                                                { "remove_connectedPlayerManagerDestroyedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.add_partyChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::add_partyChangedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cca8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.remove_partyChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::remove_partyChangedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cca8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.add_partySizeChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::add_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cca8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.remove_partySizeChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<int32_t>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::remove_partySizeChangedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cca8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.add_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::add_joinRequestedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cca8fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.remove_joinRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::remove_joinRequestedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cca900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.add_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::add_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cca904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 48 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.remove_inviteRequestedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::System::Action_1<::GlobalNamespace::INetworkPlayer*>*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::remove_inviteRequestedEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cca908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 49 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_partyPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel::get_partyPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cca90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_partyPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.INetworkPlayerModel_get_otherPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel::INetworkPlayerModel_get_otherPlayers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5cca91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "INetworkPlayerModel.get_otherPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_localPlayerIsPartyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::get_localPlayerIsPartyOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cca92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_isServer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::get_isServer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cca934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_isServer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.get_isClient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::get_isClient)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5cca95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_isClient", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cca98c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::Update)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5ccade4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.GetPartyPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel::GetPartyPlayers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ccae68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 51 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.GetOtherPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(
    &::GlobalNamespace::BaseNetworkPlayerModel::GetOtherPlayers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ccaef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 52 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.ConnectionFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::ConnectionFailed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ccaf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 53 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.PlayerConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::PlayerConnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccaf88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.PlayerDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::PlayerDisconnected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccaf8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.PlayerStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::PlayerStateChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccaf90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.ConnectedPlayerManagerChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::ConnectedPlayerManagerChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccaf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 57 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.PlayerOrderChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::PlayerOrderChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccaf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 58 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.PartySizeChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(int32_t)>(&::GlobalNamespace::BaseNetworkPlayerModel::PartySizeChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccaf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 59 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.Connected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::Connected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ccafa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 60 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.Disconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::BaseNetworkPlayerModel::Disconnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ccafa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.DestroyPartyConnection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::DestroyPartyConnection)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ccafb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 63 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.DestroyConnectedPlayerManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::DestroyConnectedPlayerManager)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x5cca990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "DestroyConnectedPlayerManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)(::StringW)>(&::GlobalNamespace::BaseNetworkPlayerModel::Log)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ccb114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseNetworkPlayerModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseNetworkPlayerModel::*)()>(&::GlobalNamespace::BaseNetworkPlayerModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ccb1f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager*& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__connectedPlayerManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager* const& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__connectedPlayerManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_set__connectedPlayerManager(::GlobalNamespace::BeatSaberConnectedPlayerManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayerManager = value;
}
constexpr ::GlobalNamespace::INetworkPlayerModel*& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__partyManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyManager;
}
constexpr ::GlobalNamespace::INetworkPlayerModel* const& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__partyManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyManager;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_set__partyManager(::GlobalNamespace::INetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partyManager = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration = value;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__selectionMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__selectionMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionMask = value;
}
constexpr bool& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__discoveryEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____discoveryEnabled_k__BackingField;
}
constexpr bool const& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get__discoveryEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____discoveryEnabled_k__BackingField;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_set__discoveryEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____discoveryEnabled_k__BackingField = value;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get_connectedPlayerManagerCreatedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerManagerCreatedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* const& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get_connectedPlayerManagerCreatedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerManagerCreatedEvent;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_set_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectedPlayerManagerCreatedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get_connectedPlayerManagerDestroyedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerManagerDestroyedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* const& GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_get_connectedPlayerManagerDestroyedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerManagerDestroyedEvent;
}
constexpr void GlobalNamespace::BaseNetworkPlayerModel::__cordl_internal_set_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectedPlayerManagerDestroyedEvent = value;
}
inline ::GlobalNamespace::BeatSaberConnectedPlayerManager* GlobalNamespace::BaseNetworkPlayerModel::get_connectedPlayerManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_connectedPlayerManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(this, ___internal_method);
}
inline ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::BaseNetworkPlayerModel::get_partyManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_partyManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::INetworkPlayerModel*>(this, ___internal_method);
}
inline bool GlobalNamespace::BaseNetworkPlayerModel::get_isConnectedOrConnecting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_isConnectedOrConnecting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BaseNetworkPlayerModel::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_isConnectionOwner", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BaseNetworkPlayerModel::get_discoveryEnabled() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::set_discoveryEnabled(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BaseNetworkPlayerModel::get_hasNetworkingFailed() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BaseNetworkPlayerModel::get_currentPartySize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::BaseNetworkPlayerModel::get_configuration() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::BaseNetworkPlayerModel::get_selectionMask() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(),
                                                           { "add_connectedPlayerManagerCreatedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(),
                                                           { "remove_connectedPlayerManagerCreatedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(),
                                                           { "add_connectedPlayerManagerDestroyedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(),
                                                           { "remove_connectedPlayerManagerDestroyedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::add_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::remove_partySizeChangedEvent(::System::Action_1<int32_t>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::BaseNetworkPlayerModel::get_partyPlayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_partyPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::BaseNetworkPlayerModel::INetworkPlayerModel_get_otherPlayers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "INetworkPlayerModel.get_otherPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline bool GlobalNamespace::BaseNetworkPlayerModel::get_localPlayerIsPartyOwner() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BaseNetworkPlayerModel::get_isServer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_isServer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BaseNetworkPlayerModel::get_isClient() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "get_isClient", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::Update() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::BaseNetworkPlayerModel::GetPartyPlayers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GlobalNamespace::BaseNetworkPlayerModel::GetOtherPlayers() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 52 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::ConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 53 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::PlayerConnected(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::PlayerDisconnected(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::PlayerStateChanged(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::ConnectedPlayerManagerChanged() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 57 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::PlayerOrderChanged(::GlobalNamespace::IBeatSaberConnectedPlayer* player) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 58 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::PartySizeChanged(int32_t currentPartySize) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 59 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPartySize);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::Connected() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 60 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::Disconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
template <typename T> inline bool GlobalNamespace::BaseNetworkPlayerModel::CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig) {
  auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 62 })));
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() }));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, createConfig);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::DestroyPartyConnection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), 63 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::DestroyConnectedPlayerManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "DestroyConnectedPlayerManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::BaseNetworkPlayerModel::CreateConnectedPlayerManager(::GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(),
                                                           { "CreateConnectedPlayerManager", { ::i2c::class_of<T>() }, { ::i2c::type_of<::GlobalNamespace::IConnectionInitParams_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, initParams);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::BaseNetworkPlayerModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseNetworkPlayerModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BaseNetworkPlayerModel* GlobalNamespace::BaseNetworkPlayerModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseNetworkPlayerModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
constexpr GlobalNamespace::BaseNetworkPlayerModel::operator ::GlobalNamespace::INetworkPlayerModel*() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
constexpr ::GlobalNamespace::INetworkPlayerModel* GlobalNamespace::BaseNetworkPlayerModel::i___GlobalNamespace__INetworkPlayerModel() noexcept {
  return static_cast<::GlobalNamespace::INetworkPlayerModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseNetworkPlayerModel::BaseNetworkPlayerModel() {}
