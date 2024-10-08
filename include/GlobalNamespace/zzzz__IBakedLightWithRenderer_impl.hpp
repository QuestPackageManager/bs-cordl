#pragma once
// IWYU pragma private; include "GlobalNamespace/IBakedLightWithRenderer.hpp"
#include "GlobalNamespace/zzzz__IBakedLightWithRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBakedLightWithRenderer.get_bakingMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::IBakedLightWithRenderer::*)()>(
    &::GlobalNamespace::IBakedLightWithRenderer::get_bakingMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBakedLightWithRenderer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBakedLightWithRenderer*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::IBakedLightWithRenderer::get_bakingMaterial() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBakedLightWithRenderer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
