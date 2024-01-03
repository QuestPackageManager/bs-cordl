#pragma once
#include "UnityEngine/UIElements/zzzz__BaseReorderableDragAndDropController_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ListViewReorderableDragAndDropController_def.hpp"
#include "UnityEngine/UIElements/zzzz__IListDragAndDropArgs_def.hpp"
#include "UnityEngine/UIElements/zzzz__ListView_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragVisualMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewReorderableDragAndDropController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewReorderableDragAndDropController::*)(::UnityEngine::UIElements::ListView*)>(
    &::UnityEngine::UIElements::ListViewReorderableDragAndDropController::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e08b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListView*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewReorderableDragAndDropController.HandleDragAndDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragVisualMode (::UnityEngine::UIElements::ListViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::ListViewReorderableDragAndDropController::HandleDragAndDrop)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2e08b70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ListViewReorderableDragAndDropController.OnDrop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ListViewReorderableDragAndDropController::*)(
    ::UnityEngine::UIElements::IListDragAndDropArgs*)>(&::UnityEngine::UIElements::ListViewReorderableDragAndDropController::OnDrop)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2e08d0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), 13));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::ListView*& UnityEngine::UIElements::ListViewReorderableDragAndDropController::__get_m_ListView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListView;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ListView*> const& UnityEngine::UIElements::ListViewReorderableDragAndDropController::__get_m_ListView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ListView;
}
constexpr void UnityEngine::UIElements::ListViewReorderableDragAndDropController::__set_m_ListView(::UnityEngine::UIElements::ListView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ListView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::ListViewReorderableDragAndDropController* UnityEngine::UIElements::ListViewReorderableDragAndDropController::New_ctor(::UnityEngine::UIElements::ListView* view) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>(view));
}
inline void UnityEngine::UIElements::ListViewReorderableDragAndDropController::_ctor(::UnityEngine::UIElements::ListView* view) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), ".ctor",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ListView*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, view);
}
inline ::UnityEngine::UIElements::DragVisualMode UnityEngine::UIElements::ListViewReorderableDragAndDropController::HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DragVisualMode, false>(this, ___internal_method, args);
}
inline void UnityEngine::UIElements::ListViewReorderableDragAndDropController::OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* args) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ListViewReorderableDragAndDropController*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ListViewReorderableDragAndDropController::ListViewReorderableDragAndDropController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
