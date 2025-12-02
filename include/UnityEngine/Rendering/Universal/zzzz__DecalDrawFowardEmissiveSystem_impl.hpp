#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalDrawFowardEmissiveSystem.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawFowardEmissiveSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityManager*)>(&::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6636d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem.GetPassIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalCachedChunk*)>(&::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem::GetPassIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6636d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*>::get(), 5));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entityManager);
}
inline int32_t UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem::GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, decalCachedChunk);
}
inline ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*
UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*>(entityManager));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem::DecalDrawFowardEmissiveSystem() {}
