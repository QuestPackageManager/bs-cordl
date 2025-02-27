#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SetupDragAndDropArgs.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SetupDragAndDropArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::SetupDragAndDropArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::SetupDragAndDropArgs::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::IEnumerable_1<int32_t>*, ::UnityEngine::UIElements::StartDragArgs)>(
    &::UnityEngine::UIElements::SetupDragAndDropArgs::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4a26bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetupDragAndDropArgs>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StartDragArgs>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::SetupDragAndDropArgs::_ctor(::UnityEngine::UIElements::VisualElement* draggedElement, ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds,
                                                                 ::UnityEngine::UIElements::StartDragArgs startDragArgs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::SetupDragAndDropArgs>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StartDragArgs>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, draggedElement, selectedIds, startDragArgs);
}
// Ctor Parameters [CppParam { name: "draggedElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: Some("{}") }, CppParam { name: "selectedIds", ty:
// "::System::Collections::Generic::IEnumerable_1<int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "startDragArgs", ty: "::UnityEngine::UIElements::StartDragArgs", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::SetupDragAndDropArgs::SetupDragAndDropArgs(::UnityEngine::UIElements::VisualElement* draggedElement,
                                                                                ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds,
                                                                                ::UnityEngine::UIElements::StartDragArgs startDragArgs) noexcept {
  this->draggedElement = draggedElement;
  this->selectedIds = selectedIds;
  this->startDragArgs = startDragArgs;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::SetupDragAndDropArgs::SetupDragAndDropArgs() {}
