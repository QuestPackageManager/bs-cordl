#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/CallbackArray_1.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
template<typename TDelegate>
inline int32_t UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::get_length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                        "get_length",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename TDelegate>
inline TDelegate UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                        "get_Item",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<TDelegate, false>(this, ___internal_method, index);
}
template<typename TDelegate>
inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TDelegate>
inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::AddCallback(TDelegate  dlg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                        "AddCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDelegate>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dlg);
}
template<typename TDelegate>
inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::RemoveCallback(TDelegate  dlg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                        "RemoveCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDelegate>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dlg);
}
template<typename TDelegate>
inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::LockForChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                        "LockForChanges",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename TDelegate>
inline void UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::UnlockForChanges()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>>::get(),
                        "UnlockForChanges",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_CannotMutateCallbacksArray", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Callbacks", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CallbacksToAdd", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CallbacksToRemove", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>", modifiers: "", def_value: Some("{}") }]
template<typename TDelegate>
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::CallbackArray_1(bool  m_CannotMutateCallbacksArray, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  m_Callbacks, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  m_CallbacksToAdd, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<TDelegate>  m_CallbacksToRemove) noexcept  {
this->m_CannotMutateCallbacksArray = m_CannotMutateCallbacksArray;
this->m_Callbacks = m_Callbacks;
this->m_CallbacksToAdd = m_CallbacksToAdd;
this->m_CallbacksToRemove = m_CallbacksToRemove;
}
// Ctor Parameters []
template<typename TDelegate>
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<TDelegate>::CallbackArray_1()   {
}
