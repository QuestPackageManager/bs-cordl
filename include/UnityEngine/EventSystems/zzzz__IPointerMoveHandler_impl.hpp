#pragma once
#include "UnityEngine/EventSystems/zzzz__IPointerMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::IPointerMoveHandler.OnPointerMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::IPointerMoveHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::IPointerMoveHandler::OnPointerMove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::IPointerMoveHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::IPointerMoveHandler*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::EventSystems::IPointerMoveHandler::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
inline void UnityEngine::EventSystems::IPointerMoveHandler::OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::IPointerMoveHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
