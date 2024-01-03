#pragma once
#include "UnityEngine/UIElements/zzzz__IDragAndDrop_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropData_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IDragAndDrop.StartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IDragAndDrop::*)(::UnityEngine::UIElements::StartDragArgs*)>(
    &::UnityEngine::UIElements::IDragAndDrop::StartDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IDragAndDrop.get_data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IDragAndDropData* (::UnityEngine::UIElements::IDragAndDrop::*)()>(
    &::UnityEngine::UIElements::IDragAndDrop::get_data)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop*>::get(), 1));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IDragAndDrop::StartDrag(::UnityEngine::UIElements::StartDragArgs* args) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline ::UnityEngine::UIElements::IDragAndDropData* UnityEngine::UIElements::IDragAndDrop::get_data() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IDragAndDrop*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IDragAndDropData*, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
