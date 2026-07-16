#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/SetupDragAndDropArgs.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_impl.hpp"
#include "UnityEngine/UIElements/zzzz__SetupDragAndDropArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StartDragArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::SetupDragAndDropArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::SetupDragAndDropArgs::*)(
    ::UnityEngine::UIElements::VisualElement*, ::System::Collections::Generic::IEnumerable_1<int32_t>*, ::UnityEngine::UIElements::StartDragArgs)>(
    &::UnityEngine::UIElements::SetupDragAndDropArgs::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6d88530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SetupDragAndDropArgs>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StartDragArgs>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::SetupDragAndDropArgs::_ctor(::UnityEngine::UIElements::VisualElement* draggedElement, ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds,
                                                                 ::UnityEngine::UIElements::StartDragArgs startDragArgs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::SetupDragAndDropArgs>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StartDragArgs>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, draggedElement, selectedIds, startDragArgs);
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
