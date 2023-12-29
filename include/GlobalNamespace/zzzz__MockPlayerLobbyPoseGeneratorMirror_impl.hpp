#pragma once
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGeneratorMirror_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)(
    ::GlobalNamespace::IMultiplayerSessionManager*, ::GlobalNamespace::NodePoseSyncStateManager*)>(&::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2101548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncStateManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)()>(
    &::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21032bc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::*)()>(
    &::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Tick)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x21032c0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NodePoseSyncStateManager*& GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NodePoseSyncStateManager*> const& GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::__set__nodePoseSyncStateManager(::GlobalNamespace::NodePoseSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodePoseSyncStateManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror* GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                                                            ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>(multiplayerSessionManager, nodePoseSyncStateManager));
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                       ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncStateManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager, nodePoseSyncStateManager);
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>::get(),
                                                                             "Init", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror*>::get(),
                                                                             "Tick", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerLobbyPoseGeneratorMirror::MockPlayerLobbyPoseGeneratorMirror() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
