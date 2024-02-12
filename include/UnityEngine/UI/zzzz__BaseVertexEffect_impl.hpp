#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__BaseVertexEffect_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__UIVertex_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::BaseVertexEffect.ModifyVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::BaseVertexEffect::*)(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>*)>(
    &::UnityEngine::UI::BaseVertexEffect::ModifyVertices)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::BaseVertexEffect*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::BaseVertexEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::BaseVertexEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::BaseVertexEffect::*)()>(&::UnityEngine::UI::BaseVertexEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dad900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::BaseVertexEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UI::BaseVertexEffect::ModifyVertices(::System::Collections::Generic::List_1<::UnityEngine::UIVertex>* vertices) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::BaseVertexEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vertices);
}
inline ::UnityEngine::UI::BaseVertexEffect* UnityEngine::UI::BaseVertexEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::BaseVertexEffect*>());
}
inline void UnityEngine::UI::BaseVertexEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::BaseVertexEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::BaseVertexEffect::BaseVertexEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
