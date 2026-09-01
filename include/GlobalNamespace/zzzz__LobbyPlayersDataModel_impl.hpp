#pragma once
// IWYU pragma private; include "GlobalNamespace\LobbyPlayersDataModel.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayerData_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerData_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayerPermissionsModel_def.hpp"
#include "GlobalNamespace/zzzz__LobbyPlayersDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel___c::*)()>(&::GlobalNamespace::LobbyPlayersDataModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x373b9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel___c._SetOwnedSongPacks_b__41_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LobbyPlayersDataModel___c::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::LobbyPlayersDataModel___c::_SetOwnedSongPacks_b__41_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x373b9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel___c*>(),
                                                                                           { "<SetOwnedSongPacks>b__41_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LobbyPlayersDataModel___c::setStaticF___9(::GlobalNamespace::LobbyPlayersDataModel___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LobbyPlayersDataModel___c*, "<>9", ::GlobalNamespace::LobbyPlayersDataModel___c*>(
      std::forward<::GlobalNamespace::LobbyPlayersDataModel___c*>(value));
}
inline ::GlobalNamespace::LobbyPlayersDataModel___c* GlobalNamespace::LobbyPlayersDataModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LobbyPlayersDataModel___c*, "<>9", ::GlobalNamespace::LobbyPlayersDataModel___c*>();
}
inline void GlobalNamespace::LobbyPlayersDataModel___c::setStaticF___9__41_0(::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>*, "<>9__41_0", ::GlobalNamespace::LobbyPlayersDataModel___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>* GlobalNamespace::LobbyPlayersDataModel___c::getStaticF___9__41_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::BeatmapLevelPack*, ::StringW>*, "<>9__41_0", ::GlobalNamespace::LobbyPlayersDataModel___c*>();
}
inline void GlobalNamespace::LobbyPlayersDataModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LobbyPlayersDataModel___c::_SetOwnedSongPacks_b__41_0(::GlobalNamespace::BeatmapLevelPack* pack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel___c*>(),
                                                                                         { "<SetOwnedSongPacks>b__41_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, pack);
}
inline ::GlobalNamespace::LobbyPlayersDataModel___c* GlobalNamespace::LobbyPlayersDataModel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyPlayersDataModel___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyPlayersDataModel___c::LobbyPlayersDataModel___c() {}
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::*)(int32_t)>(
    &::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373b63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::*)()>(
    &::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x373b9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::*)()>(
    &::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::MoveNext)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x373ba28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58.__m__Finally1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::*)()>(
    &::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__m__Finally1)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x373bc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "<>m__Finally1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58.System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_ILobbyPlayerData___get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*> (::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::*)()>(
        &::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_ILobbyPlayerData___get_Current)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x373bcd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(),
                                                { "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,ILobbyPlayerData>>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::*)()>(
    &::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x373bce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::*)()>(
    &::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x373bd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>&
GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*> const&
GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void
GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::LobbyPlayersDataModel*& GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::LobbyPlayersDataModel* const& GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_set___4__this(::GlobalNamespace::LobbyPlayersDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::GlobalNamespace::LobbyPlayerData*>&
GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::GlobalNamespace::LobbyPlayerData*> const&
GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::Dictionary_2_Enumerator<::StringW, ::GlobalNamespace::LobbyPlayerData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline void GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "<>m__Finally1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>
GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_ILobbyPlayerData___get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(),
                                                           { "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,ILobbyPlayerData>>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58* GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
constexpr GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*
GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::
    i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__ILobbyPlayerData___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyPlayersDataModel__GetEnumerator_d__58::LobbyPlayersDataModel__GetEnumerator_d__58() {}
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::*)()>(
    &::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x86c;
  constexpr static std::size_t addrs = 0x373bd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373c5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::LobbyPlayersDataModel*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_songPackMask_5__2", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_dlcSongPack_5__4", ty:
// "::GlobalNamespace::BeatmapLevelPack*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::LobbyPlayersDataModel__SetOwnedSongPacks_d__41(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::LobbyPlayersDataModel* __4__this,
    ::GlobalNamespace::SongPackMask _songPackMask_5__2, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevelPack*>* __7__wrap2,
    ::GlobalNamespace::BeatmapLevelPack* _dlcSongPack_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_songPackMask_5__2 = _songPackMask_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->_dlcSongPack_5__4 = _dlcSongPack_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyPlayersDataModel__SetOwnedSongPacks_d__41::LobbyPlayersDataModel__SetOwnedSongPacks_d__41() {}
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.get_localUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::get_localUserId)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x3737c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_localUserId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.get_partyOwnerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::get_partyOwnerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3737dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_partyOwnerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.set_partyOwnerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(&::GlobalNamespace::LobbyPlayersDataModel::set_partyOwnerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3737dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "set_partyOwnerId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.add_didChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::add_didChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3737dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "add_didChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.remove_didChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::remove_didChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3737e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "remove_didChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ILobbyPlayerData* (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(
    &::GlobalNamespace::LobbyPlayersDataModel::get_Item)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3737f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.GetOrCreateLobbyPlayerDataModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LobbyPlayerData* (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, ::by_ref<bool>)>(
    &::GlobalNamespace::LobbyPlayersDataModel::GetOrCreateLobbyPlayerDataModel)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3737fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "GetOrCreateLobbyPlayerDataModel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetPlayerBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, ::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::LobbyPlayersDataModel::SetPlayerBeatmapLevel)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x37380d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "SetPlayerBeatmapLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetPlayerGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::SetPlayerGameplayModifiers)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x37381a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "SetPlayerGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetPlayerIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, bool, bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetPlayerIsActive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x373822c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "SetPlayerIsActive", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetPlayerIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, bool, bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetPlayerIsReady)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x37382c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "SetPlayerIsReady", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetPlayerIsInLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, bool, bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetPlayerIsInLobby)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x373835c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "SetPlayerIsInLobby", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetPlayerIsPartyOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, bool, bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetPlayerIsPartyOwner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x37383f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "SetPlayerIsPartyOwner", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetLocalPlayerBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerBeatmapLevel)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x3738498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                           { "SetLocalPlayerBeatmapLevel", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.ClearLocalPlayerBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::ClearLocalPlayerBeatmapLevel)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x37385f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ClearLocalPlayerBeatmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetLocalPlayerGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerGameplayModifiers)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x37386c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                           { "SetLocalPlayerGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.ClearLocalPlayerGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::ClearLocalPlayerGameplayModifiers)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3738800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ClearLocalPlayerGameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetLocalPlayerIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37388c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsActive", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetLocalPlayerIsActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(bool, bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsActive)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x37388c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsActive", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetLocalPlayerIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37389c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsReady", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetLocalPlayerIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(bool, bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsReady)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x37389c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsReady", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetLocalPlayerIsInLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsInLobby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3738aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsInLobby", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetLocalPlayerIsInLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(bool, bool)>(&::GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsInLobby)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3738aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsInLobby", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.RequestKickPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(&::GlobalNamespace::LobbyPlayersDataModel::RequestKickPlayer)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3738b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "RequestKickPlayer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.ClearData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::ClearData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3738c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ClearData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.ClearRecommendations
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::ClearRecommendations)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3738cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ClearRecommendations", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::Activate)> {
  constexpr static std::size_t size = 0x10d4;
  constexpr static std::size_t addrs = 0x3738e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "Activate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::Deactivate)> {
  constexpr static std::size_t size = 0xa5c;
  constexpr static std::size_t addrs = 0x3739f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "Deactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x373a9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.SetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::SetOwnedSongPacks)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3739ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetOwnedSongPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerGetRecommendedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetRecommendedBeatmap)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x373a9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerGetRecommendedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerGetRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x373ab94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                           { "HandleMenuRpcManagerGetRecommendedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerGetIsInLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(&::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetIsInLobby)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x373ad44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerGetIsInLobby", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerGetIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(&::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetIsReady)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x373ae84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerGetIsReady", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerRecommendBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerRecommendBeatmap)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x373afc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                { "HandleMenuRpcManagerRecommendBeatmap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerRecommendGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerRecommendGameplayModifiers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x373b008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                { "HandleMenuRpcManagerRecommendGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerClearRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerClearRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373b00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                           { "HandleMenuRpcManagerClearRecommendedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerClearBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(&::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerClearBeatmap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x373b014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerClearBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerSetIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, bool)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerSetIsReady)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373b034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                           { "HandleMenuRpcManagerSetIsReady", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerSetIsInLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, bool)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerSetIsInLobby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373b03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                           { "HandleMenuRpcManagerSetIsInLobby", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMultiplayerSessionManagerPlayerStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMultiplayerSessionManagerPlayerStateChanged)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x373b044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "HandleMultiplayerSessionManagerPlayerStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMultiplayerSessionManagerPlayerConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMultiplayerSessionManagerPlayerConnected)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x373b11c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "HandleMultiplayerSessionManagerPlayerConnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMultiplayerSessionManagerPlayerDisconnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMultiplayerSessionManagerPlayerDisconnected)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x373b358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "HandleMultiplayerSessionManagerPlayerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.NotifyModelChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(&::GlobalNamespace::LobbyPlayersDataModel::NotifyModelChange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3738188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "NotifyModelChange", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerGetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetOwnedSongPacks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x373b4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerGetOwnedSongPacks", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.HandleMenuRpcManagerSetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(
    &::GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerSetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x373b4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "HandleMenuRpcManagerSetPlayersPermissionConfiguration",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>* (
    ::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::GetEnumerator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x373b5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::LobbyPlayersDataModel::*)()>(
    &::GlobalNamespace::LobbyPlayersDataModel::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x373b644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.get_Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::get_Count)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x373b648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.ContainsKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW)>(&::GlobalNamespace::LobbyPlayersDataModel::ContainsKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x373b6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ContainsKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.TryGetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LobbyPlayersDataModel::*)(::StringW, ::by_ref<::GlobalNamespace::ILobbyPlayerData*>)>(
    &::GlobalNamespace::LobbyPlayersDataModel::TryGetValue)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x373b71c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "TryGetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ILobbyPlayerData*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.get_Keys
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GlobalNamespace::LobbyPlayersDataModel::*)()>(
    &::GlobalNamespace::LobbyPlayersDataModel::get_Keys)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x373b7a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_Keys", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILobbyPlayerData*>* (::GlobalNamespace::LobbyPlayersDataModel::*)()>(
    &::GlobalNamespace::LobbyPlayersDataModel::get_Values)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x373b7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)()>(&::GlobalNamespace::LobbyPlayersDataModel::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x373b84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LobbyPlayersDataModel.ILobbyPlayersDataModel_SetLocalPlayerBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LobbyPlayersDataModel::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::LobbyPlayersDataModel::ILobbyPlayersDataModel_SetLocalPlayerBeatmapLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x373b95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                             { "ILobbyPlayersDataModel.SetLocalPlayerBeatmapLevel", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IMenuRpcManager*& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__menuRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager;
}
constexpr ::GlobalNamespace::IMenuRpcManager* const& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__menuRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_set__menuRpcManager(::GlobalNamespace::IMenuRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuRpcManager = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__beatmapLevelsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel* const& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__beatmapLevelsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelsModel = value;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel*& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__lobbyPlayerPermissionsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr ::GlobalNamespace::LobbyPlayerPermissionsModel* const& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__lobbyPlayerPermissionsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lobbyPlayerPermissionsModel;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_set__lobbyPlayerPermissionsModel(::GlobalNamespace::LobbyPlayerPermissionsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lobbyPlayerPermissionsModel = value;
}
constexpr ::GlobalNamespace::LobbyPlayerData*& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__emptyLobbyPlayerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyLobbyPlayerData;
}
constexpr ::GlobalNamespace::LobbyPlayerData* const& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__emptyLobbyPlayerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emptyLobbyPlayerData;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_set__emptyLobbyPlayerData(::GlobalNamespace::LobbyPlayerData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emptyLobbyPlayerData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LobbyPlayerData*>*& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__playersData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LobbyPlayerData*>* const& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__playersData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersData;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_set__playersData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::LobbyPlayerData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playersData = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancellationTokenSource = value;
}
constexpr ::StringW& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__partyOwnerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyOwnerId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get__partyOwnerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyOwnerId_k__BackingField;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_set__partyOwnerId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partyOwnerId_k__BackingField = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get_didChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_get_didChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeEvent;
}
constexpr void GlobalNamespace::LobbyPlayersDataModel::__cordl_internal_set_didChangeEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeEvent = value;
}
inline ::StringW GlobalNamespace::LobbyPlayersDataModel::get_localUserId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_localUserId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::LobbyPlayersDataModel::get_partyOwnerId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_partyOwnerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::set_partyOwnerId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "set_partyOwnerId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyPlayersDataModel::add_didChangeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "add_didChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LobbyPlayersDataModel::remove_didChangeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "remove_didChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ILobbyPlayerData* GlobalNamespace::LobbyPlayersDataModel::get_Item(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_Item", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILobbyPlayerData*>(this, ___internal_method, userId);
}
inline ::GlobalNamespace::LobbyPlayerData* GlobalNamespace::LobbyPlayersDataModel::GetOrCreateLobbyPlayerDataModel(::StringW userId, ::by_ref<bool> alreadyExists) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "GetOrCreateLobbyPlayerDataModel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LobbyPlayerData*>(this, ___internal_method, userId, alreadyExists);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetPlayerBeatmapLevel(::StringW userId, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                           { "SetPlayerBeatmapLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, beatmapKey);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetPlayerGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                           { "SetPlayerGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, modifiers);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetPlayerIsActive(::StringW userId, bool isActive, bool notifyChange) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetPlayerIsActive", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, isActive, notifyChange);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetPlayerIsReady(::StringW userId, bool isReady, bool notifyChange) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                         { "SetPlayerIsReady", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, isReady, notifyChange);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetPlayerIsInLobby(::StringW userId, bool isInLobby, bool notifyChange) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                           { "SetPlayerIsInLobby", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, isInLobby, notifyChange);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetPlayerIsPartyOwner(::StringW userId, bool isPartyOwner, bool notifyChange) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                           { "SetPlayerIsPartyOwner", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, isPartyOwner, notifyChange);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerBeatmapLevel(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                         { "SetLocalPlayerBeatmapLevel", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::LobbyPlayersDataModel::ClearLocalPlayerBeatmapLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ClearLocalPlayerBeatmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerGameplayModifiers(::GlobalNamespace::GameplayModifiers* modifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                         { "SetLocalPlayerGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modifiers);
}
inline void GlobalNamespace::LobbyPlayersDataModel::ClearLocalPlayerGameplayModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ClearLocalPlayerGameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsActive(bool isActive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsActive", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsActive(bool isActive, bool notifyChange) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsActive", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive, notifyChange);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsReady(bool isReady) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsReady", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isReady);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsReady(bool isReady, bool notifyChange) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsReady", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isReady, notifyChange);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsInLobby(bool isInLobby) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsInLobby", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isInLobby);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetLocalPlayerIsInLobby(bool isInLobby, bool notifyChange) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetLocalPlayerIsInLobby", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isInLobby, notifyChange);
}
inline void GlobalNamespace::LobbyPlayersDataModel::RequestKickPlayer(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "RequestKickPlayer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyPlayersDataModel::ClearData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ClearData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::ClearRecommendations() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ClearRecommendations", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::Activate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "Activate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "Deactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::SetOwnedSongPacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "SetOwnedSongPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetRecommendedBeatmap(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerGetRecommendedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetRecommendedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerGetRecommendedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetIsInLobby(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerGetIsInLobby", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetIsReady(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerGetIsReady", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerRecommendBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                              { "HandleMenuRpcManagerRecommendBeatmap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, beatmapKeySerializable);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerRecommendGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                              { "HandleMenuRpcManagerRecommendGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, gameplayModifiers);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerClearRecommendedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                         { "HandleMenuRpcManagerClearRecommendedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerClearBeatmap(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerClearBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerSetIsReady(::StringW userId, bool isReady) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                         { "HandleMenuRpcManagerSetIsReady", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, isReady);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerSetIsInLobby(::StringW userId, bool isInLobby) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                                                         { "HandleMenuRpcManagerSetIsInLobby", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, isInLobby);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMultiplayerSessionManagerPlayerStateChanged(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                           { "HandleMultiplayerSessionManagerPlayerStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMultiplayerSessionManagerPlayerConnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                           { "HandleMultiplayerSessionManagerPlayerConnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMultiplayerSessionManagerPlayerDisconnected(::GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                           { "HandleMultiplayerSessionManagerPlayerDisconnected", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer);
}
inline void GlobalNamespace::LobbyPlayersDataModel::NotifyModelChange(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "NotifyModelChange", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerGetOwnedSongPacks(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "HandleMenuRpcManagerGetOwnedSongPacks", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::LobbyPlayersDataModel::HandleMenuRpcManagerSetPlayersPermissionConfiguration(
    ::StringW userId, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersLobbyPermissionConfiguration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
          { "HandleMenuRpcManagerSetPlayersPermissionConfiguration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playersLobbyPermissionConfiguration);
}
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*
GlobalNamespace::LobbyPlayersDataModel::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*>(
      this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::LobbyPlayersDataModel::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LobbyPlayersDataModel::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::LobbyPlayersDataModel::ContainsKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "ContainsKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool GlobalNamespace::LobbyPlayersDataModel::TryGetValue(::StringW key, ::by_ref<::GlobalNamespace::ILobbyPlayerData*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                           { "TryGetValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ILobbyPlayerData*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::LobbyPlayersDataModel::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILobbyPlayerData*>* GlobalNamespace::LobbyPlayersDataModel::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ILobbyPlayerData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LobbyPlayersDataModel::ILobbyPlayersDataModel_SetLocalPlayerBeatmapLevel(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LobbyPlayersDataModel*>(),
                                                           { "ILobbyPlayersDataModel.SetLocalPlayerBeatmapLevel", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::LobbyPlayersDataModel* GlobalNamespace::LobbyPlayersDataModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LobbyPlayersDataModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILobbyPlayersDataModel"
constexpr GlobalNamespace::LobbyPlayersDataModel::operator ::GlobalNamespace::ILobbyPlayersDataModel*() noexcept {
  return static_cast<::GlobalNamespace::ILobbyPlayersDataModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILobbyPlayersDataModel"
constexpr ::GlobalNamespace::ILobbyPlayersDataModel* GlobalNamespace::LobbyPlayersDataModel::i___GlobalNamespace__ILobbyPlayersDataModel() noexcept {
  return static_cast<::GlobalNamespace::ILobbyPlayersDataModel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>"
constexpr GlobalNamespace::LobbyPlayersDataModel::operator ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>"
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>*
GlobalNamespace::LobbyPlayersDataModel::i___System__Collections__Generic__IReadOnlyDictionary_2___StringW___GlobalNamespace__ILobbyPlayerData__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
constexpr GlobalNamespace::LobbyPlayersDataModel::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*
GlobalNamespace::LobbyPlayersDataModel::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__ILobbyPlayerData___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::LobbyPlayersDataModel::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::LobbyPlayersDataModel::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
constexpr GlobalNamespace::LobbyPlayersDataModel::operator ::System::Collections::Generic::IReadOnlyCollection_1<
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>* GlobalNamespace::
    LobbyPlayersDataModel::i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__ILobbyPlayerData___() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::LobbyPlayersDataModel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LobbyPlayersDataModel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LobbyPlayersDataModel::LobbyPlayersDataModel() {}
