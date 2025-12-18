#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CanStartDragArgs.hpp"
#include "UnityEngine/UIElements/zzzz__CanStartDragArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CanStartDragArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::CanStartDragArgs::*)(
    ::UnityEngine::UIElements::VisualElement*, int32_t, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::UIElements::CanStartDragArgs::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6bc01e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CanStartDragArgs>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CanStartDragArgs::_ctor(::UnityEngine::UIElements::VisualElement* draggedElement, int32_t id,
                                                             ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::CanStartDragArgs>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, draggedElement, id, selectedIds);
}
// Ctor Parameters [CppParam { name: "draggedElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "id", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "selectedIds", ty: "::System::Collections::Generic::IEnumerable_1<int32_t>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::CanStartDragArgs::CanStartDragArgs(::UnityEngine::UIElements::VisualElement* draggedElement, int32_t id,
                                                                        ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds) noexcept {
  this->draggedElement = draggedElement;
  this->id = id;
  this->selectedIds = selectedIds;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CanStartDragArgs::CanStartDragArgs() {}
