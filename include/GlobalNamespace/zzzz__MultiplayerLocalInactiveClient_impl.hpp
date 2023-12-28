#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactiveClient_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactiveClient.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactiveClient::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactiveClient::LateUpdate)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x23dc574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactiveClient*>::get(),
                                                                               "LateUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactiveClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactiveClient::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactiveClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dc8bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactiveClient*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerTransforms*& GlobalNamespace::MultiplayerLocalInactiveClient::__get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> const& GlobalNamespace::MultiplayerLocalInactiveClient::__get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::MultiplayerLocalInactiveClient::__set__playerTransforms(::GlobalNamespace::PlayerTransforms* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager*& GlobalNamespace::MultiplayerLocalInactiveClient::__get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const& GlobalNamespace::MultiplayerLocalInactiveClient::__get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void GlobalNamespace::MultiplayerLocalInactiveClient::__set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodePoseSyncStateManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerLocalInactiveClient::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactiveClient*>::get(),
                                                                             "LateUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactiveClient* GlobalNamespace::MultiplayerLocalInactiveClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalInactiveClient*>());
}
inline void GlobalNamespace::MultiplayerLocalInactiveClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactiveClient*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalInactiveClient::MultiplayerLocalInactiveClient() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
