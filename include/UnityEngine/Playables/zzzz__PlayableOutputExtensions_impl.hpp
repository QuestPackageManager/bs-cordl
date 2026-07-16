#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableOutputExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputExtensions_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__INotificationReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template <typename U> inline void UnityEngine::Playables::PlayableOutputExtensions::SetReferenceObject(U output, ::UnityEngine::Object* value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputExtensions*>(),
                                                           { "SetReferenceObject", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, value);
}
template <typename U> inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableOutputExtensions::GetUserData(U output) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputExtensions*>(), { "GetUserData", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method, output);
}
template <typename U> inline void UnityEngine::Playables::PlayableOutputExtensions::SetUserData(U output, ::UnityEngine::Object* value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputExtensions*>(),
                                                           { "SetUserData", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, value);
}
template <typename U> inline ::UnityEngine::Playables::Playable UnityEngine::Playables::PlayableOutputExtensions::GetSourcePlayable(U output) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputExtensions*>(), { "GetSourcePlayable", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, output);
}
template <typename U, typename V> inline void UnityEngine::Playables::PlayableOutputExtensions::SetSourcePlayable(U output, V value, int32_t port) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputExtensions*>(),
                                              { "SetSourcePlayable", { ::i2c::class_of<U>(), ::i2c::class_of<V>() }, { ::i2c::type_of<U>(), ::i2c::type_of<V>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>(), ::i2c::class_of<V>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, value, port);
}
template <typename U> inline int32_t UnityEngine::Playables::PlayableOutputExtensions::GetSourceOutputPort(U output) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputExtensions*>(), { "GetSourceOutputPort", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, output);
}
template <typename U> inline void UnityEngine::Playables::PlayableOutputExtensions::SetWeight(U output, float_t value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputExtensions*>(),
                                                                                              { "SetWeight", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<float_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, value);
}
template <typename U>
inline void UnityEngine::Playables::PlayableOutputExtensions::PushNotification(U output, ::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification,
                                                                               ::System::Object* context) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputExtensions*>(),
                                                           { "PushNotification",
                                                             { ::i2c::class_of<U>() },
                                                             { ::i2c::type_of<U>(), ::i2c::type_of<::UnityEngine::Playables::Playable>(), ::i2c::type_of<::UnityEngine::Playables::INotification*>(),
                                                               ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, origin, notification, context);
}
template <typename U> inline void UnityEngine::Playables::PlayableOutputExtensions::AddNotificationReceiver(U output, ::UnityEngine::Playables::INotificationReceiver* receiver) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableOutputExtensions*>(),
                                              { "AddNotificationReceiver", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<::UnityEngine::Playables::INotificationReceiver*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, output, receiver);
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableOutputExtensions::PlayableOutputExtensions() {}
