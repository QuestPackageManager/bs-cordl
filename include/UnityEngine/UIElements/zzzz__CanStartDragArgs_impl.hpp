#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/CanStartDragArgs.hpp"
#include "UnityEngine/UIElements/zzzz__CanStartDragArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CanStartDragArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::CanStartDragArgs::*)(
    ::UnityEngine::UIElements::VisualElement*, int32_t, ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::UnityEngine::UIElements::CanStartDragArgs::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6d88520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::CanStartDragArgs>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::CanStartDragArgs::_ctor(::UnityEngine::UIElements::VisualElement* draggedElement, int32_t id,
                                                             ::System::Collections::Generic::IEnumerable_1<int32_t>* selectedIds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::CanStartDragArgs>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, draggedElement, id, selectedIds);
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
