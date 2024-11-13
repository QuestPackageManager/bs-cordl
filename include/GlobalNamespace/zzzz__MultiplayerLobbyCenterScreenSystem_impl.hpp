#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLobbyCenterScreenSystem.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyCenterScreenSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyCenterScreenSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyCenterScreenSystem::*)()>(
    &::GlobalNamespace::MultiplayerLobbyCenterScreenSystem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ba6a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenSystem*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::MultiplayerLobbyCenterScreenSystem* GlobalNamespace::MultiplayerLobbyCenterScreenSystem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLobbyCenterScreenSystem*>());
}
inline void GlobalNamespace::MultiplayerLobbyCenterScreenSystem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyCenterScreenSystem*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyCenterScreenSystem::MultiplayerLobbyCenterScreenSystem() {}
