#pragma once
#include "UnityEngine/UI/zzzz__IVertexModifier_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::IVertexModifier.ModifyVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::IVertexModifier::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*)>(
    &::UnityEngine::UI::IVertexModifier::ModifyVertices)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IVertexModifier*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IVertexModifier*>::get(), 0));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::IVertexModifier::ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IVertexModifier*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, verts);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
