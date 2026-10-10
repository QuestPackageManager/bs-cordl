#pragma once
// IWYU pragma private; include "UnityEngine/Audio/MessageExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__MessageExtensions_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
template <typename T>
  requires(::cordl_internals::reference_type_constraint<T>)
inline T UnityEngine::Audio::MessageExtensions::Get(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorInstance_Message const> message) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::MessageExtensions*>(),
                                                           { "Get", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::ProcessorInstance_Message const>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, message);
}
template <typename T>
  requires(::cordl_internals::reference_type_constraint<T>)
inline ::UnityEngine::Audio::ProcessorInstance_Response UnityEngine::Audio::MessageExtensions::SendMessage(::UnityEngine::Audio::ControlContext context,
                                                                                                           ::UnityEngine::Audio::ProcessorInstance processorInstance, T message) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Audio::MessageExtensions*>(),
          { "SendMessage", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Audio::ControlContext>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance_Response>(nullptr, ___internal_method, context, processorInstance, message);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::MessageExtensions::MessageExtensions() {}
