#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputRuntimeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputRuntimeExtensions_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
template<typename TCommand>
inline int64_t UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions::DeviceCommand(::UnityEngine::InputSystem::LowLevel::IInputRuntime*  runtime, int32_t  deviceId, ::ByRef<TCommand>  command)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions*>::get(),
                    "DeviceCommand",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TCommand>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TCommand>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, runtime, deviceId, command);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputRuntimeExtensions::InputRuntimeExtensions()   {
}
