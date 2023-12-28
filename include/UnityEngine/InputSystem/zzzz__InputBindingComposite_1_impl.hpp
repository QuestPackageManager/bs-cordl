#pragma once
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingCompositeContext_def.hpp"
template <typename TValue> inline ::System::Type* UnityEngine::InputSystem::InputBindingComposite_1<TValue>::get_valueType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>::get(), "get_valueType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::InputBindingComposite_1<TValue>::get_valueSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>::get(), "get_valueSizeInBytes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputBindingComposite_1<TValue>::ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>::get(), "ReadValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, context);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputBindingComposite_1<TValue>::ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, ::cordl_internals::Ptr<void> buffer,
                                                                                 int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>::get(), "ReadValue", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, buffer, bufferSize);
}
template <typename TValue>
inline ::System::Object* UnityEngine::InputSystem::InputBindingComposite_1<TValue>::ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>::get(), "ReadValueAsObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context);
}
template <typename TValue> inline ::UnityEngine::InputSystem::InputBindingComposite_1<TValue>* UnityEngine::InputSystem::InputBindingComposite_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>());
}
template <typename TValue> inline void UnityEngine::InputSystem::InputBindingComposite_1<TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputBindingComposite_1<TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::InputBindingComposite_1<TValue>::InputBindingComposite_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
