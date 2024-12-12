#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ListViewReorderableDragAndDropController.hpp"
#include "UnityEngine/UIElements/zzzz__BaseReorderableDragAndDropController_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderableDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewReorderableDragAndDropController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::BaseListView*)>(&::UnityEngine::UIElements::ListViewReorderableDragAndDropController::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4a1d140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseListView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewReorderableDragAndDropController.HandleDragAndDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::ListViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::ListViewReorderableDragAndDropController::HandleDragAndDrop)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x4a1d164;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewReorderableDragAndDropController.OnDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::ListViewReorderableDragAndDropController::OnDrop)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x4a1d2ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), 19));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::BaseListView*& UnityEngine::UIElements::ListViewReorderableDragAndDropController::__cordl_internal_get_m_ListView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListView;
}
constexpr ::UnityEngine::UIElements::BaseListView* const& UnityEngine::UIElements::ListViewReorderableDragAndDropController::__cordl_internal_get_m_ListView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListView;
}
constexpr void UnityEngine::UIElements::ListViewReorderableDragAndDropController::__cordl_internal_set_m_ListView(::UnityEngine::UIElements::BaseListView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ListView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::ListViewReorderableDragAndDropController::_ctor(::UnityEngine::UIElements::BaseListView* view) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseListView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, view);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::ListViewReorderableDragAndDropController::HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(this, ___internal_method, args);
}
inline void UnityEngine::UIElements::ListViewReorderableDragAndDropController::OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline ::UnityEngine::UIElements::ListViewReorderableDragAndDropController* UnityEngine::UIElements::ListViewReorderableDragAndDropController::New_ctor(::UnityEngine::UIElements::BaseListView* view) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>(view));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewReorderableDragAndDropController::ListViewReorderableDragAndDropController() {}
