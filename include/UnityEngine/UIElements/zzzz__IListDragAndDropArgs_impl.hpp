#pragma once
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__IDragAndDropData_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragAndDropPosition_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IListDragAndDropArgs.get_insertAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::IListDragAndDropArgs::*)()>(
    &::UnityEngine::UIElements::IListDragAndDropArgs::get_insertAtIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IListDragAndDropArgs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IListDragAndDropArgs*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IListDragAndDropArgs.get_dragAndDropData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IDragAndDropData* (::UnityEngine::UIElements::IListDragAndDropArgs::*)()>(
    &::UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IListDragAndDropArgs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IListDragAndDropArgs*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IListDragAndDropArgs.get_dragAndDropPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragAndDropPosition (::UnityEngine::UIElements::IListDragAndDropArgs::*)()>(
    &::UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IListDragAndDropArgs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IListDragAndDropArgs*>::get(), 2));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::UIElements::IListDragAndDropArgs::get_insertAtIndex() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IListDragAndDropArgs*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IDragAndDropData* UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IListDragAndDropArgs*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IDragAndDropData*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DragAndDropPosition UnityEngine::UIElements::IListDragAndDropArgs::get_dragAndDropPosition() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IListDragAndDropArgs*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragAndDropPosition, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
