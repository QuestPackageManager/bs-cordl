#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerMenuClient_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuPlayerController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMenuClient.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerMenuClient::*)()>(&::GlobalNamespace::MultiplayerMenuClient::LateUpdate)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x23a95dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerMenuClient*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMenuClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerMenuClient::*)()>(&::GlobalNamespace::MultiplayerMenuClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a9944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerMenuClient*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MenuPlayerController>& GlobalNamespace::MultiplayerMenuClient::__cordl_internal_get__menuPlayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuPlayerController;
}
constexpr ::UnityW<::GlobalNamespace::MenuPlayerController> const& GlobalNamespace::MultiplayerMenuClient::__cordl_internal_get__menuPlayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuPlayerController;
}
constexpr void GlobalNamespace::MultiplayerMenuClient::__cordl_internal_set__menuPlayerController(::UnityW<::GlobalNamespace::MenuPlayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuPlayerController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager*& GlobalNamespace::MultiplayerMenuClient::__cordl_internal_get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& GlobalNamespace::MultiplayerMenuClient::__cordl_internal_get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void GlobalNamespace::MultiplayerMenuClient::__cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodePoseSyncStateManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerMenuClient::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerMenuClient*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerMenuClient* GlobalNamespace::MultiplayerMenuClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerMenuClient*>());
}
inline void GlobalNamespace::MultiplayerMenuClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerMenuClient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerMenuClient::MultiplayerMenuClient() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
