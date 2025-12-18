#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalDrawErrorSystem.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawErrorSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalCachedChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntityManager_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityManager*, ::UnityEngine::Rendering::Universal::DecalTechnique)>(&::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x669f7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalTechnique>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem.GetPassIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalCachedChunk*)>(&::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetPassIndex)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x669f858;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem.GetMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::*)(
    ::UnityEngine::Rendering::Universal::DecalEntityChunk*)>(&::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetMaterial)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x669f8c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique& UnityEngine::Rendering::Universal::DecalDrawErrorSystem::__cordl_internal_get_m_Technique() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Technique;
}
constexpr ::UnityEngine::Rendering::Universal::DecalTechnique const& UnityEngine::Rendering::Universal::DecalDrawErrorSystem::__cordl_internal_get_m_Technique() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Technique;
}
constexpr void UnityEngine::Rendering::Universal::DecalDrawErrorSystem::__cordl_internal_set_m_Technique(::UnityEngine::Rendering::Universal::DecalTechnique value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Technique = value;
}
inline void UnityEngine::Rendering::Universal::DecalDrawErrorSystem::_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager,
                                                                           ::UnityEngine::Rendering::Universal::DecalTechnique technique) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalEntityManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::DecalTechnique>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entityManager, technique);
}
inline int32_t UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, decalCachedChunk);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Universal::DecalDrawErrorSystem::GetMaterial(::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method, decalEntityChunk);
}
inline ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*
UnityEngine::Rendering::Universal::DecalDrawErrorSystem::New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager,
                                                                  ::UnityEngine::Rendering::Universal::DecalTechnique technique) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*>(entityManager, technique));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem::DecalDrawErrorSystem() {}
