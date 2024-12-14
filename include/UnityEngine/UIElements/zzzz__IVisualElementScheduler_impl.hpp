#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IVisualElementScheduler.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduler_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimerState_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IVisualElementScheduler.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualElementScheduledItem* (
    ::UnityEngine::UIElements::IVisualElementScheduler::*)(::System::Action_1<::UnityEngine::UIElements::TimerState>*)>(&::UnityEngine::UIElements::IVisualElementScheduler::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduler*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IVisualElementScheduler.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualElementScheduledItem* (
    ::UnityEngine::UIElements::IVisualElementScheduler::*)(::System::Action*)>(&::UnityEngine::UIElements::IVisualElementScheduler::Execute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduler*>::get(), 1));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine::UIElements::IVisualElementScheduler::Execute(::System::Action_1<::UnityEngine::UIElements::TimerState>* timerUpdateEvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualElementScheduledItem*, false>(this, ___internal_method, timerUpdateEvent);
}
inline ::UnityEngine::UIElements::IVisualElementScheduledItem* UnityEngine::UIElements::IVisualElementScheduler::Execute(::System::Action* updateEvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IVisualElementScheduler*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IVisualElementScheduledItem*, false>(this, ___internal_method, updateEvent);
}
