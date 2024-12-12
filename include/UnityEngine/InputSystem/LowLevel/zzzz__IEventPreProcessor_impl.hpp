#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IEventPreProcessor.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IEventPreProcessor_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
inline bool UnityEngine::InputSystem::LowLevel::IEventPreProcessor::PreProcessEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IEventPreProcessor*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, currentEventPtr);
}
