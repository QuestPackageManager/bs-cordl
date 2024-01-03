#pragma once
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__GameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__GameState_def.hpp"
#include "GlobalNamespace/zzzz__IServerBeatmapProvider_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuRpcManager_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams::*)(
    ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IMultiplayerSessionManager*, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration,
    ::GlobalNamespace::IServerBeatmapProvider*)>(&::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe3bff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IServerBeatmapProvider*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams::_ctor(::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                   ::StringW creatorId, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
                                                                                   ::GlobalNamespace::GameplayServerConfiguration configuration,
                                                                                   ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IServerBeatmapProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, taskUtility, multiplayerSessionManager, creatorId, selectionMask, configuration, beatmapProvider);
}
// Ctor Parameters [CppParam { name: "taskUtility", ty: "::BGNet::Core::ITaskUtility*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "multiplayerSessionManager", ty:
// "::GlobalNamespace::IMultiplayerSessionManager*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "creatorId", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "selectionMask", ty: "::GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "configuration", ty:
// "::GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapProvider", ty: "::GlobalNamespace::IServerBeatmapProvider*", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams::__GameplayServerFiniteStateMachine__InitParams(
    ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::StringW creatorId, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask,
    ::GlobalNamespace::GameplayServerConfiguration configuration, ::GlobalNamespace::IServerBeatmapProvider* beatmapProvider) noexcept {
  this->taskUtility = taskUtility;
  this->multiplayerSessionManager = multiplayerSessionManager;
  this->creatorId = creatorId;
  this->selectionMask = selectionMask;
  this->configuration = configuration;
  this->beatmapProvider = beatmapProvider;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams::__GameplayServerFiniteStateMachine__InitParams() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_taskUtility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::ITaskUtility* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_taskUtility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bf38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                               "get_taskUtility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_taskUtility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::BGNet::Core::ITaskUtility*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_taskUtility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_taskUtility", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_multiplayerSessionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IMultiplayerSessionManager* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_multiplayerSessionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                               "get_multiplayerSessionManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_multiplayerSessionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::IMultiplayerSessionManager*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_multiplayerSessionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_multiplayerSessionManager", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_ownerUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_ownerUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                               "get_ownerUserId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_ownerUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::StringW)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_ownerUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bf60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_ownerUserId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_selectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelSelectionMask (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_selectionMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe3bf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                               "get_selectionMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_selectionMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::BeatmapLevelSelectionMask)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_selectionMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe3bf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_selectionMask", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerConfiguration (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe3bf98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                               "get_configuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::GameplayServerConfiguration)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_configuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe3bfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_configuration", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_beatmapProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IServerBeatmapProvider* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_beatmapProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                               "get_beatmapProvider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_beatmapProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::IServerBeatmapProvider*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_beatmapProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bfc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_beatmapProvider", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IServerBeatmapProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_menuRpcManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MenuRpcManager* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_menuRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bfd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                               "get_menuRpcManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_menuRpcManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::MenuRpcManager*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_menuRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bfd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_menuRpcManager",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuRpcManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.get_gameplayRpcManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayRpcManager* (::GlobalNamespace::GameplayServerFiniteStateMachine::*)()>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::get_gameplayRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bfe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                               "get_gameplayRpcManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine.set_gameplayRpcManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(::GlobalNamespace::GameplayRpcManager*)>(
    &::GlobalNamespace::GameplayServerFiniteStateMachine::set_gameplayRpcManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bfe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_gameplayRpcManager", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayRpcManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayServerFiniteStateMachine::*)(
    ::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams)>(&::GlobalNamespace::GameplayServerFiniteStateMachine::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xe3be14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::GameplayServerFiniteStateMachine::__get__taskUtility_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& GlobalNamespace::GameplayServerFiniteStateMachine::__get__taskUtility_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set__taskUtility_k__BackingField(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskUtility_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::GameplayServerFiniteStateMachine::__get__multiplayerSessionManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const&
GlobalNamespace::GameplayServerFiniteStateMachine::__get__multiplayerSessionManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set__multiplayerSessionManager_k__BackingField(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::GameplayServerFiniteStateMachine::__get__ownerUserId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerUserId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::GameplayServerFiniteStateMachine::__get__ownerUserId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerUserId_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set__ownerUserId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ownerUserId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& GlobalNamespace::GameplayServerFiniteStateMachine::__get__selectionMask_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& GlobalNamespace::GameplayServerFiniteStateMachine::__get__selectionMask_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionMask_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set__selectionMask_k__BackingField(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionMask_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration& GlobalNamespace::GameplayServerFiniteStateMachine::__get__configuration_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayServerConfiguration const& GlobalNamespace::GameplayServerFiniteStateMachine::__get__configuration_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set__configuration_k__BackingField(::GlobalNamespace::GameplayServerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration_k__BackingField = value;
}
constexpr ::GlobalNamespace::IServerBeatmapProvider*& GlobalNamespace::GameplayServerFiniteStateMachine::__get__beatmapProvider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapProvider_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IServerBeatmapProvider*> const& GlobalNamespace::GameplayServerFiniteStateMachine::__get__beatmapProvider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapProvider_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set__beatmapProvider_k__BackingField(::GlobalNamespace::IServerBeatmapProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapProvider_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuRpcManager*& GlobalNamespace::GameplayServerFiniteStateMachine::__get__menuRpcManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuRpcManager*> const& GlobalNamespace::GameplayServerFiniteStateMachine::__get__menuRpcManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuRpcManager_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set__menuRpcManager_k__BackingField(::GlobalNamespace::MenuRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuRpcManager_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayRpcManager*& GlobalNamespace::GameplayServerFiniteStateMachine::__get__gameplayRpcManager_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayRpcManager*> const& GlobalNamespace::GameplayServerFiniteStateMachine::__get__gameplayRpcManager_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager_k__BackingField;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set__gameplayRpcManager_k__BackingField(::GlobalNamespace::GameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayRpcManager_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameState*& GlobalNamespace::GameplayServerFiniteStateMachine::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameState*> const& GlobalNamespace::GameplayServerFiniteStateMachine::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set_state(::GlobalNamespace::GameState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::GameplayServerFiniteStateMachine::__get_enteringState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enteringState;
}
constexpr bool const& GlobalNamespace::GameplayServerFiniteStateMachine::__get_enteringState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enteringState;
}
constexpr void GlobalNamespace::GameplayServerFiniteStateMachine::__set_enteringState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enteringState = value;
}
inline ::BGNet::Core::ITaskUtility* GlobalNamespace::GameplayServerFiniteStateMachine::get_taskUtility() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                             "get_taskUtility", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::ITaskUtility*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_taskUtility(::BGNet::Core::ITaskUtility* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_taskUtility", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::GameplayServerFiniteStateMachine::get_multiplayerSessionManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                             "get_multiplayerSessionManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMultiplayerSessionManager*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_multiplayerSessionManager", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::GameplayServerFiniteStateMachine::get_ownerUserId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                             "get_ownerUserId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_ownerUserId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_ownerUserId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevelSelectionMask GlobalNamespace::GameplayServerFiniteStateMachine::get_selectionMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                             "get_selectionMask", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelSelectionMask, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_selectionMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSelectionMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayServerConfiguration GlobalNamespace::GameplayServerFiniteStateMachine::get_configuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                             "get_configuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerConfiguration, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_configuration(::GlobalNamespace::GameplayServerConfiguration value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_configuration", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayServerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IServerBeatmapProvider* GlobalNamespace::GameplayServerFiniteStateMachine::get_beatmapProvider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                             "get_beatmapProvider", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IServerBeatmapProvider*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_beatmapProvider(::GlobalNamespace::IServerBeatmapProvider* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_beatmapProvider", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IServerBeatmapProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MenuRpcManager* GlobalNamespace::GameplayServerFiniteStateMachine::get_menuRpcManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                             "get_menuRpcManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MenuRpcManager*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_menuRpcManager(::GlobalNamespace::MenuRpcManager* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_menuRpcManager",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuRpcManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayRpcManager* GlobalNamespace::GameplayServerFiniteStateMachine::get_gameplayRpcManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(),
                                                                             "get_gameplayRpcManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayRpcManager*, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::set_gameplayRpcManager(::GlobalNamespace::GameplayRpcManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), "set_gameplayRpcManager", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayRpcManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayServerFiniteStateMachine* GlobalNamespace::GameplayServerFiniteStateMachine::New_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameplayServerFiniteStateMachine*>(initParams));
}
inline void GlobalNamespace::GameplayServerFiniteStateMachine::_ctor(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams initParams) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayServerFiniteStateMachine::GameplayServerFiniteStateMachine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
