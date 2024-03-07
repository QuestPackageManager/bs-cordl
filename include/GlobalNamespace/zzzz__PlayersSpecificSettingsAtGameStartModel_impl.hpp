#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersSpecificSettingsAtGameStartModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::*)()>(
    &::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xee54d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0._SaveFromNetSerializable_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::*)(
    ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::_SaveFromNetSerializable_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xee54d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0*>::get(), "<SaveFromNetSerializable>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::__cordl_internal_get_player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const&
GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::__cordl_internal_get_player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___player;
}
constexpr void GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::__cordl_internal_set_player(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___player)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0* GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0*>());
}
inline void GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::_SaveFromNetSerializable_b__0(::GlobalNamespace::IConnectedPlayer* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0*>::get(), "<SaveFromNetSerializable>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0::__PlayersSpecificSettingsAtGameStartModel____c__DisplayClass13_0() {}
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.get_playersAtGameStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* (
    ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStart)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xee4c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), "get_playersAtGameStart",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.get_localPlayerSpecificSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettingsNetSerializable* (
    ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_localPlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xee4c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(),
                                                 "get_localPlayerSpecificSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.set_localPlayerSpecificSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(
    ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_localPlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xee4ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), "set_localPlayerSpecificSettings",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.get_playersAtGameStartNetSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* (
    ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)()>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStartNetSerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xee4ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(),
                                                 "get_playersAtGameStartNetSerializable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.set_playersAtGameStartNetSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*)>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_playersAtGameStartNetSerializable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xee4cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), "set_playersAtGameStartNetSerializable",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(
    ::GlobalNamespace::IMultiplayerSessionManager*, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xee4cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.GetPlayerSpecificSettingsForUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettingsNetSerializable* (
    ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(::StringW)>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::GetPlayerSpecificSettingsForUserId)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0xee4d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), "GetPlayerSpecificSettingsForUserId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel.SaveFromNetSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::*)(
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*)>(&::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::SaveFromNetSerializable)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xee50e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), "SaveFromNetSerializable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*& GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__localPlayerSpecificSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerSpecificSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*> const&
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__localPlayerSpecificSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerSpecificSettings_k__BackingField;
}
constexpr void
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_set__localPlayerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localPlayerSpecificSettings_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*&
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersAtGameStartNetSerializable_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*> const&
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__playersAtGameStartNetSerializable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playersAtGameStartNetSerializable_k__BackingField;
}
constexpr void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_set__playersAtGameStartNetSerializable_k__BackingField(
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playersAtGameStartNetSerializable_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const&
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(),
                                                                             "get_playersAtGameStart", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_localPlayerSpecificSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(),
                                                                             "get_localPlayerSpecificSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_localPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), "set_localPlayerSpecificSettings",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::get_playersAtGameStartNetSerializable() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(),
                                               "get_playersAtGameStartNetSerializable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::set_playersAtGameStartNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), "set_playersAtGameStartNetSerializable",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*
GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                   ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>(multiplayerSessionManager, localPlayerSpecificSettings));
}
inline void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                            ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* localPlayerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager, localPlayerSpecificSettings);
}
inline ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::GetPlayerSpecificSettingsForUserId(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), "GetPlayerSpecificSettingsForUserId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::SaveFromNetSerializable(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*>::get(), "SaveFromNetSerializable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playersAtGameStartNetSerializable);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel::PlayersSpecificSettingsAtGameStartModel() {}
