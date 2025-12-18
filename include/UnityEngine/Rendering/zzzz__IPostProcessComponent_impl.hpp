#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IPostProcessComponent.hpp"
#include "UnityEngine/Rendering/zzzz__IPostProcessComponent_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::IPostProcessComponent.IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IPostProcessComponent::*)()>(
    &::UnityEngine::Rendering::IPostProcessComponent::IsActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IPostProcessComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IPostProcessComponent*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::IPostProcessComponent.IsTileCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::IPostProcessComponent::*)()>(
    &::UnityEngine::Rendering::IPostProcessComponent::IsTileCompatible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65e2904;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IPostProcessComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IPostProcessComponent*>::get(), 1));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::IPostProcessComponent::IsActive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IPostProcessComponent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::IPostProcessComponent::IsTileCompatible() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::IPostProcessComponent*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
