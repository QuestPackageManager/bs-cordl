#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputProcessor_1.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
template <typename TValue> inline TValue UnityEngine::InputSystem::InputProcessor_1<TValue>::Process(TValue value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, value, control);
}
template <typename TValue> inline ::System::Object* UnityEngine::InputSystem::InputProcessor_1<TValue>::ProcessAsObject(::System::Object* value, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, control);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputProcessor_1<TValue>::Process(::cordl_internals::Ptr<void> buffer, int32_t bufferSize, ::UnityEngine::InputSystem::InputControl* control) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, bufferSize, control);
}
template <typename TValue> inline ::UnityEngine::InputSystem::InputProcessor_1<TValue>* UnityEngine::InputSystem::InputProcessor_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>());
}
template <typename TValue> inline void UnityEngine::InputSystem::InputProcessor_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::InputProcessor_1<TValue>::InputProcessor_1() {}
