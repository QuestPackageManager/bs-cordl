#pragma once
// IWYU pragma private; include "UnityEngine/UI/IVertexModifier.hpp"
#include "UnityEngine/UI/zzzz__IVertexModifier_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
inline void UnityEngine::UI::IVertexModifier::ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* verts) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::IVertexModifier*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, verts);
}
