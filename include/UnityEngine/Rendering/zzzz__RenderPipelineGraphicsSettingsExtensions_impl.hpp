#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineGraphicsSettingsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGraphicsSettingsExtensions_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
template <typename T>
inline void UnityEngine::Rendering::RenderPipelineGraphicsSettingsExtensions::SetValueAndNotify(::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* settings, ::ByRef<T> currentPropertyValue,
                                                                                                T newValue, ::StringW propertyName) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsExtensions*>::get(), "SetValueAndNotify",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, settings, currentPropertyValue, newValue, propertyName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsExtensions::RenderPipelineGraphicsSettingsExtensions() {}
