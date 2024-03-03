#pragma once
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::IMoveHandler.OnMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::IMoveHandler::*)(::UnityEngine::EventSystems::AxisEventData*)>(
    &::UnityEngine::EventSystems::IMoveHandler::OnMove)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::IMoveHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::IMoveHandler*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr UnityEngine::EventSystems::IMoveHandler::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* UnityEngine::EventSystems::IMoveHandler::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
inline void UnityEngine::EventSystems::IMoveHandler::OnMove(::UnityEngine::EventSystems::AxisEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::IMoveHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
