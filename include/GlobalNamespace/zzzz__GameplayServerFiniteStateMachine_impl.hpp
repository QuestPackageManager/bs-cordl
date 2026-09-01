#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayServerFiniteStateMachine.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameState_def.hpp"
#include "GlobalNamespace/zzzz__GameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__MenuRpcManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams::*)(
    ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration,
    ::GlobalNamespace::IServerBeatmapProvider*)>(&::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32b2c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(), ::i2c::type_of<::GlobalNamespace::IServerBeatmapProvider*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayServerFiniteStateMachine_InitParams::_ctor(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager, ::StringW creatorId,
                                                                                ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                                ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>(), ::i2c::type_of<::GlobalNamespace::IServerBeatmapProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, taskUtility, multiplayerSessionManager, creatorId, selectionMask, configuration, beatmapProvider);
}
// Ctor Parameters [CppParam { name: "taskUtility", ty: "::BGNet::Core::ITaskUtility*", modifiers: "", def_value: Some("{}") }, CppParam { name: "multiplayerSessionManager", ty:
// "::GlobalNamespace::IBeatSaberMultiplayerSessionManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "creatorId", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "selectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "configuration", ty:
// "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapProvider", ty: "::GlobalNamespace::IServerBeatmapProvider*", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams::GameplayServerFiniteStateMachine_InitParams(::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                                      ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                                                                      ::StringW creatorId, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                                                      ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                                                                      ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider) noexcept {
  this->taskUtility = taskUtility;
  this->multiplayerSessionManager = multiplayerSessionManager;
  this->creatorId = creatorId;
  this->selectionMask = selectionMask;
  this->configuration = configuration;
  this->beatmapProvider = beatmapProvider;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams::GameplayServerFiniteStateMachine_InitParams() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_taskUtility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BGNet::Core::ITaskUtility* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_taskUtility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b1824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_taskUtility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_taskUtility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::BGNet::Core::ITaskUtility*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_taskUtility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b182c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "set_taskUtility", {}, { ::i2c::type_of<::BGNet::Core::ITaskUtility*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_multiplayerSessionManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IBeatSaberMultiplayerSessionManager* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_multiplayerSessionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b1834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_multiplayerSessionManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_multiplayerSessionManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::IBeatSaberMultiplayerSessionManager*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_multiplayerSessionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b183c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                             { "set_multiplayerSessionManager", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_ownerUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(&::GlobalNamespace::GameplayServerFiniteStateMachine::get_ownerUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b1844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_ownerUserId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_ownerUserId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::StringW)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_ownerUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b184c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "set_ownerUserId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_selectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_selectionMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32b1854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_selectionMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_selectionMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::BeatmapLevelSelectionMask)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_selectionMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32b186c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                           { "set_selectionMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32b1884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_configuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_configuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32b1898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                           { "set_configuration", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_beatmapProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IServerBeatmapProvider* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_beatmapProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b18ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_beatmapProvider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_beatmapProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::IServerBeatmapProvider*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_beatmapProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b18b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                           { "set_beatmapProvider", {}, { ::i2c::type_of<::GlobalNamespace::IServerBeatmapProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_menuRpcManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MenuRpcManager* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_menuRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b18bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_menuRpcManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_menuRpcManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::MenuRpcManager*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_menuRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b18c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                           { "set_menuRpcManager", {}, { ::i2c::type_of<::GlobalNamespace::MenuRpcManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_gameplayRpcManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayRpcManager* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_gameplayRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b18cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_gameplayRpcManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_gameplayRpcManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::GameplayRpcManager*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_gameplayRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b18d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                           { "set_gameplayRpcManager", {}, { ::i2c::type_of<::GlobalNamespace::GameplayRpcManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x32b18dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams>() } })));
    return ___internal_method;
  }
};
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__taskUtility_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility_k__BackingField;
}
constexpr ::BGNet::Core::ITaskUtility* const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__taskUtility_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set__taskUtility_k__BackingField(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____taskUtility_k__BackingField = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__multiplayerSessionManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager_k__BackingField;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__multiplayerSessionManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set__multiplayerSessionManager_k__BackingField(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__ownerUserId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerUserId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__ownerUserId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerUserId_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set__ownerUserId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ownerUserId_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__selectionMask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__selectionMask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set__selectionMask_k__BackingField(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionMask_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__configuration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__configuration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set__configuration_k__BackingField(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration_k__BackingField = value;
}
constexpr ::GlobalNamespace::IServerBeatmapProvider*& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__beatmapProvider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapProvider_k__BackingField;
}
constexpr ::GlobalNamespace::IServerBeatmapProvider* const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__beatmapProvider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapProvider_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set__beatmapProvider_k__BackingField(::GlobalNamespace::IServerBeatmapProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapProvider_k__BackingField = value;
}
constexpr ::GlobalNamespace::MenuRpcManager*& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__menuRpcManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager_k__BackingField;
}
constexpr ::GlobalNamespace::MenuRpcManager* const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__menuRpcManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set__menuRpcManager_k__BackingField(::GlobalNamespace::MenuRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____menuRpcManager_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayRpcManager*& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__gameplayRpcManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayRpcManager* const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get__gameplayRpcManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set__gameplayRpcManager_k__BackingField(::GlobalNamespace::GameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayRpcManager_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameState*& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::GlobalNamespace::GameState* const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set_state(::GlobalNamespace::GameState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
constexpr bool& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get_enteringState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enteringState;
}
constexpr bool const& GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_get_enteringState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enteringState;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__cordl_internal_set_enteringState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enteringState = value;
}
inline ::BGNet::Core::ITaskUtility* GlobalNamespace::GameplayServerFiniteStateMachine::get_taskUtility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_taskUtility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::ITaskUtility*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_taskUtility(::BGNet::Core::ITaskUtility* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "set_taskUtility", {}, { ::i2c::type_of<::BGNet::Core::ITaskUtility*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* GlobalNamespace::GameplayServerFiniteStateMachine::get_multiplayerSessionManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_multiplayerSessionManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                           { "set_multiplayerSessionManager", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameplayServerFiniteStateMachine::get_ownerUserId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_ownerUserId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_ownerUserId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "set_ownerUserId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GameplayServerFiniteStateMachine::get_selectionMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_selectionMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                         { "set_selectionMask", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSelectionMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameplayServerFiniteStateMachine::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_configuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                         { "set_configuration", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IServerBeatmapProvider* GlobalNamespace::GameplayServerFiniteStateMachine::get_beatmapProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_beatmapProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IServerBeatmapProvider*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_beatmapProvider(::GlobalNamespace::IServerBeatmapProvider* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                         { "set_beatmapProvider", {}, { ::i2c::type_of<::GlobalNamespace::IServerBeatmapProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MenuRpcManager* GlobalNamespace::GameplayServerFiniteStateMachine::get_menuRpcManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_menuRpcManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuRpcManager*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_menuRpcManager(::GlobalNamespace::MenuRpcManager* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                         { "set_menuRpcManager", {}, { ::i2c::type_of<::GlobalNamespace::MenuRpcManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayRpcManager* GlobalNamespace::GameplayServerFiniteStateMachine::get_gameplayRpcManager() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(), { "get_gameplayRpcManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayRpcManager*>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_gameplayRpcManager(::GlobalNamespace::GameplayRpcManager* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                         { "set_gameplayRpcManager", {}, { ::i2c::type_of<::GlobalNamespace::GameplayRpcManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams initParams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayServerFiniteStateMachine*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initParams);
}
inline ::GlobalNamespace::GameplayServerFiniteStateMachine* GlobalNamespace::GameplayServerFiniteStateMachine::New_ctor(::GlobalNamespace::GameplayServerFiniteStateMachine_InitParams initParams) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayServerFiniteStateMachine*>(initParams));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine::GameplayServerFiniteStateMachine() {}
