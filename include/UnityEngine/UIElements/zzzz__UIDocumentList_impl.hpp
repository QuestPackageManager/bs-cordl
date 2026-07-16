#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIDocumentList.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocumentList_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocumentList.RemoveFromListAndFromVisualTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocumentList::*)(::UnityEngine::UIElements::UIDocument*)>(
    &::UnityEngine::UIElements::UIDocumentList::RemoveFromListAndFromVisualTree)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6da9e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentList*>(),
                                                                                           { "RemoveFromListAndFromVisualTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocumentList.AddToListAndToVisualTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocumentList::*)(::UnityEngine::UIElements::UIDocument*, ::UnityEngine::UIElements::VisualElement*, int32_t)>(
    &::UnityEngine::UIElements::UIDocumentList::AddToListAndToVisualTree)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x6da9f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIDocumentList*>(),
            { "AddToListAndToVisualTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocumentList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocumentList::*)()>(&::UnityEngine::UIElements::UIDocumentList::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6da9e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*& UnityEngine::UIElements::UIDocumentList::__cordl_internal_get_m_AttachedUIDocuments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachedUIDocuments;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* const& UnityEngine::UIElements::UIDocumentList::__cordl_internal_get_m_AttachedUIDocuments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AttachedUIDocuments;
}
constexpr void UnityEngine::UIElements::UIDocumentList::__cordl_internal_set_m_AttachedUIDocuments(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AttachedUIDocuments = value;
}
inline void UnityEngine::UIElements::UIDocumentList::RemoveFromListAndFromVisualTree(::UnityEngine::UIElements::UIDocument* uiDocument) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentList*>(),
                                                                                         { "RemoveFromListAndFromVisualTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uiDocument);
}
inline void UnityEngine::UIElements::UIDocumentList::AddToListAndToVisualTree(::UnityEngine::UIElements::UIDocument* uiDocument, ::UnityEngine::UIElements::VisualElement* visualTree,
                                                                              int32_t firstInsertIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIDocumentList*>(),
          { "AddToListAndToVisualTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uiDocument, visualTree, firstInsertIndex);
}
inline void UnityEngine::UIElements::UIDocumentList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocumentList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIDocumentList* UnityEngine::UIElements::UIDocumentList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIDocumentList*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIDocumentList::UIDocumentList() {}
