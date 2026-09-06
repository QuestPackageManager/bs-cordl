#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/INotifyValueChangedExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChangedExtensions_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
template <typename T>
inline bool UnityEngine::UIElements::INotifyValueChangedExtensions::RegisterValueChangedCallback(::UnityEngine::UIElements::INotifyValueChanged_1<T>* control,
                                                                                                 ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::INotifyValueChangedExtensions*>(),
                                                           { "RegisterValueChangedCallback",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::UIElements::INotifyValueChanged_1<T>*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, callback);
}
template <typename T>
inline bool UnityEngine::UIElements::INotifyValueChangedExtensions::UnregisterValueChangedCallback(::UnityEngine::UIElements::INotifyValueChanged_1<T>* control,
                                                                                                   ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>* callback) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::INotifyValueChangedExtensions*>(),
                                                           { "UnregisterValueChangedCallback",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::UnityEngine::UIElements::INotifyValueChanged_1<T>*>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<T>*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, control, callback);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::INotifyValueChangedExtensions::INotifyValueChangedExtensions() {}
