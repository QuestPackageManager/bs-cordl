#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerMenuClient_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuPlayerController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMenuClient.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerMenuClient::*)()>(&::GlobalNamespace::MultiplayerMenuClient::LateUpdate)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x22a74e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerMenuClient*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerMenuClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerMenuClient::*)()>(&::GlobalNamespace::MultiplayerMenuClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a785c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerMenuClient*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MenuPlayerController*& GlobalNamespace::MultiplayerMenuClient::__get__menuPlayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuPlayerController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuPlayerController*> const& GlobalNamespace::MultiplayerMenuClient::__get__menuPlayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____menuPlayerController;
}
constexpr void GlobalNamespace::MultiplayerMenuClient::__set__menuPlayerController(::GlobalNamespace::MenuPlayerController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuPlayerController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager*& GlobalNamespace::MultiplayerMenuClient::__get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& GlobalNamespace::MultiplayerMenuClient::__get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void GlobalNamespace::MultiplayerMenuClient::__set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodePoseSyncStateManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerMenuClient::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerMenuClient*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerMenuClient* GlobalNamespace::MultiplayerMenuClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerMenuClient*>());
}
inline void GlobalNamespace::MultiplayerMenuClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerMenuClient*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerMenuClient::MultiplayerMenuClient() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
