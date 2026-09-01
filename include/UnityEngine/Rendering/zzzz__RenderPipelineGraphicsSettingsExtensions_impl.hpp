#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\RenderPipelineGraphicsSettingsExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderPipelineGraphicsSettingsExtensions_def.hpp"
#include "UnityEngine/Rendering/zzzz__IRenderPipelineGraphicsSettings_def.hpp"
template <typename T>
inline void UnityEngine::Rendering::RenderPipelineGraphicsSettingsExtensions::SetValueAndNotify(::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* settings, ::by_ref<T> currentPropertyValue,
                                                                                                T newValue, ::StringW propertyName) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsExtensions*>(),
                          { "SetValueAndNotify",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings, currentPropertyValue, newValue, propertyName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsExtensions::RenderPipelineGraphicsSettingsExtensions() {}
