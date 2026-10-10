#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorExtensions_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlFunction_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorFunction_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
template <typename T>
  requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* UnityEngine::Audio::ProcessorExtensions::CAllocChunk() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorExtensions*>(), { "CAllocChunk", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method);
}
template <typename TControl, typename TRealtime>
  requires(::cordl_internals::type_constraint<TControl, ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*> && ::cordl_internals::value_type_constraint<TControl> &&
           ::cordl_internals::default_constructor_constraint<TControl> && ::cordl_internals::type_constraint<TRealtime, ::UnityEngine::Audio::ProcessorInstance_IRealtime*> &&
           ::cordl_internals::value_type_constraint<TRealtime> && ::cordl_internals::default_constructor_constraint<TRealtime>)
inline void UnityEngine::Audio::ProcessorExtensions::DispatchGenericControl(::by_ref<TControl> control, ::by_ref<TRealtime> realtime,
                                                                            /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorHeader const> header, void* additionalPtr,
                                                                            ::UnityEngine::Audio::ControlFunction function) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorExtensions*>(),
                                              { "DispatchGenericControl",
                                                { ::i2c::class_of<TControl>(), ::i2c::class_of<TRealtime>() },
                                                { ::i2c::type_of<::by_ref<TControl>>(), ::i2c::type_of<::by_ref<TRealtime>>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::ProcessorHeader const>>(),
                                                  ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::Audio::ControlFunction>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TControl>(), ::i2c::class_of<TRealtime>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, realtime, header, additionalPtr, function);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::UnityEngine::Audio::ProcessorInstance_IRealtime*> && ::cordl_internals::value_type_constraint<T> &&
           ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Audio::ProcessorExtensions::DispatchGenericProcessor(::by_ref<T> processor, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::ProcessorHeader const> header,
                                                                              void* additionalPtr, ::UnityEngine::Audio::ProcessorFunction function) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorExtensions*>(), { "DispatchGenericProcessor",
                                                                                           { ::i2c::class_of<T>() },
                                                                                           { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::ProcessorHeader const>>(),
                                                                                             ::i2c::type_of<void*>(), ::i2c::type_of<::UnityEngine::Audio::ProcessorFunction>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, processor, header, additionalPtr, function);
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorExtensions::ProcessorExtensions() {}
