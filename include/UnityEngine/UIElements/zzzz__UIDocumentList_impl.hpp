#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocumentList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocumentList.RemoveFromListAndFromVisualTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIDocumentList::*)(::UnityEngine::UIElements::UIDocument*)>(
    &::UnityEngine::UIElements::UIDocumentList::RemoveFromListAndFromVisualTree)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2e14f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIDocumentList*>::get(), "RemoveFromListAndFromVisualTree", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIDocument*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocumentList.AddToListAndToVisualTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIDocumentList::*)(
    ::UnityEngine::UIElements::UIDocument*, ::UnityEngine::UIElements::VisualElement*, int32_t)>(&::UnityEngine::UIElements::UIDocumentList::AddToListAndToVisualTree)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x2e14fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIDocumentList*>::get(), "AddToListAndToVisualTree", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIDocument*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocumentList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIDocumentList::*)()>(&::UnityEngine::UIElements::UIDocumentList::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2e15318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIDocumentList*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIDocument*>*& UnityEngine::UIElements::UIDocumentList::__get_m_AttachedUIDocuments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AttachedUIDocuments;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIDocument*>*> const&
UnityEngine::UIElements::UIDocumentList::__get_m_AttachedUIDocuments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AttachedUIDocuments;
}
constexpr void UnityEngine::UIElements::UIDocumentList::__set_m_AttachedUIDocuments(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIDocument*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AttachedUIDocuments)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::UIDocumentList::RemoveFromListAndFromVisualTree(::UnityEngine::UIElements::UIDocument* uiDocument) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIDocumentList*>::get(), "RemoveFromListAndFromVisualTree", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIDocument*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uiDocument);
}
/// @param firstInsertIndex: int32_t (default: static_cast<int32_t>(0x0))
inline void UnityEngine::UIElements::UIDocumentList::AddToListAndToVisualTree(::UnityEngine::UIElements::UIDocument* uiDocument, ::UnityEngine::UIElements::VisualElement* visualTree,
                                                                              int32_t firstInsertIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIDocumentList*>::get(), "AddToListAndToVisualTree", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIDocument*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uiDocument, visualTree, firstInsertIndex);
}
inline ::UnityEngine::UIElements::UIDocumentList* UnityEngine::UIElements::UIDocumentList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIDocumentList*>());
}
inline void UnityEngine::UIElements::UIDocumentList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIDocumentList*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIDocumentList::UIDocumentList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
