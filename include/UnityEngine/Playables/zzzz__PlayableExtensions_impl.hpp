#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableExtensions_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorWrapMode_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayState_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableTraversalMode_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
template <typename U> inline bool UnityEngine::Playables::PlayableExtensions::IsValid(U playable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "IsValid", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playable);
}
template <typename U> inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableExtensions::GetGraph(U playable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "GetGraph", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(nullptr, ___internal_method, playable);
}
template <typename U> inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableExtensions::GetPlayState(U playable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "GetPlayState", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(nullptr, ___internal_method, playable);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::Play(U playable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "Play", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::Pause(U playable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "Pause", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::SetSpeed(U playable, double_t value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                                                              { "SetSpeed", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<double_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::SetDuration(U playable, double_t value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                                                              { "SetDuration", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<double_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
template <typename U> inline double_t UnityEngine::Playables::PlayableExtensions::GetDuration(U playable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "GetDuration", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, playable);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::SetTime(U playable, double_t value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                                                              { "SetTime", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<double_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
template <typename U> inline double_t UnityEngine::Playables::PlayableExtensions::GetTime(U playable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "GetTime", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, playable);
}
template <typename U> inline double_t UnityEngine::Playables::PlayableExtensions::GetPreviousTime(U playable) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "GetPreviousTime", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, playable);
}
template <typename U> inline bool UnityEngine::Playables::PlayableExtensions::IsDone(U playable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "IsDone", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playable);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::SetPropagateSetTime(U playable, bool value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                                                              { "SetPropagateSetTime", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::SetInputCount(U playable, int32_t value) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                                                              { "SetInputCount", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
template <typename U> inline int32_t UnityEngine::Playables::PlayableExtensions::GetInputCount(U playable) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "GetInputCount", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, playable);
}
template <typename U> inline ::UnityEngine::Playables::Playable UnityEngine::Playables::PlayableExtensions::GetInput(U playable, int32_t inputPort) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                                                              { "GetInput", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable, inputPort);
}
template <typename U> inline ::UnityEngine::Playables::Playable UnityEngine::Playables::PlayableExtensions::GetOutput(U playable, int32_t outputPort) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                                                              { "GetOutput", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable, outputPort);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::SetInputWeight(U playable, int32_t inputIndex, float_t weight) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                           { "SetInputWeight", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, inputIndex, weight);
}
template <typename U, typename V> inline void UnityEngine::Playables::PlayableExtensions::SetInputWeight(U playable, V input, float_t weight) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                              { "SetInputWeight", { ::i2c::class_of<U>(), ::i2c::class_of<V>() }, { ::i2c::type_of<U>(), ::i2c::type_of<V>(), ::i2c::type_of<float_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>(), ::i2c::class_of<V>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, input, weight);
}
template <typename U> inline float_t UnityEngine::Playables::PlayableExtensions::GetInputWeight(U playable, int32_t inputIndex) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                                                              { "GetInputWeight", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, playable, inputIndex);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::SetTraversalMode(U playable, ::UnityEngine::Playables::PlayableTraversalMode mode) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                              { "SetTraversalMode", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<::UnityEngine::Playables::PlayableTraversalMode>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, mode);
}
template <typename U> inline ::UnityEngine::Playables::DirectorWrapMode UnityEngine::Playables::PlayableExtensions::GetTimeWrapMode(U playable) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(), { "GetTimeWrapMode", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorWrapMode>(nullptr, ___internal_method, playable);
}
template <typename U> inline void UnityEngine::Playables::PlayableExtensions::SetTimeWrapMode(U playable, ::UnityEngine::Playables::DirectorWrapMode value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableExtensions*>(),
                                                           { "SetTimeWrapMode", { ::i2c::class_of<U>() }, { ::i2c::type_of<U>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playable, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableExtensions::PlayableExtensions() {}
