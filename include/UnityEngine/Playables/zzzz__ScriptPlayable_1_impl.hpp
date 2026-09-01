#pragma once
// IWYU pragma private; include "UnityEngine\Playables\ScriptPlayable_1.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template <typename T> inline void UnityEngine::Playables::ScriptPlayable_1<T>::setStaticF_m_NullPlayable(::UnityEngine::Playables::ScriptPlayable_1<T> value) {
  ::cordl_internals::setStaticField<::UnityEngine::Playables::ScriptPlayable_1<T>, "m_NullPlayable", ::UnityEngine::Playables::ScriptPlayable_1<T>>(
      std::forward<::UnityEngine::Playables::ScriptPlayable_1<T>>(value));
}
template <typename T> inline ::UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::getStaticF_m_NullPlayable() {
  return ::cordl_internals::getStaticField<::UnityEngine::Playables::ScriptPlayable_1<T>, "m_NullPlayable", ::UnityEngine::Playables::ScriptPlayable_1<T>>();
}
template <typename T> inline ::UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::get_Null() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { "get_Null", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<T>>(nullptr, ___internal_method);
}
template <typename T> inline ::UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<T>>(nullptr, ___internal_method, graph, inputCount);
}
template <typename T>
inline ::UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::Create(::UnityEngine::Playables::PlayableGraph graph, T _cordl_template, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(),
                                                           { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<T>>(nullptr, ___internal_method, graph, _cordl_template, inputCount);
}
template <typename T>
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::ScriptPlayable_1<T>::CreateHandle(::UnityEngine::Playables::PlayableGraph graph, T _cordl_template, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(),
                                                           { "CreateHandle", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method, graph, _cordl_template, inputCount);
}
template <typename T> inline ::System::Object* UnityEngine::Playables::ScriptPlayable_1<T>::CreateScriptInstance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { "CreateScriptInstance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Object* UnityEngine::Playables::ScriptPlayable_1<T>::CloneScriptInstance(::UnityEngine::Playables::IPlayableBehaviour* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(),
                                                                                         { "CloneScriptInstance", {}, { ::i2c::type_of<::UnityEngine::Playables::IPlayableBehaviour*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, source);
}
template <typename T> inline ::System::Object* UnityEngine::Playables::ScriptPlayable_1<T>::CloneScriptInstanceFromEngineObject(::UnityEngine::Object* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { "CloneScriptInstanceFromEngineObject", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, source);
}
template <typename T> inline ::System::Object* UnityEngine::Playables::ScriptPlayable_1<T>::CloneScriptInstanceFromIClonable(::System::ICloneable* source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { "CloneScriptInstanceFromIClonable", {}, { ::i2c::type_of<::System::ICloneable*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, source);
}
template <typename T> inline void UnityEngine::Playables::ScriptPlayable_1<T>::_ctor(::UnityEngine::Playables::PlayableHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
template <typename T> inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::ScriptPlayable_1<T>::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
template <typename T> inline T UnityEngine::Playables::ScriptPlayable_1<T>::GetBehaviour() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { "GetBehaviour", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Playables::Playable UnityEngine::Playables::ScriptPlayable_1<T>::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Playables::ScriptPlayable_1<T> playable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Playables::ScriptPlayable_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable);
}
template <typename T>
inline ::UnityEngine::Playables::ScriptPlayable_1<T>
UnityEngine::Playables::ScriptPlayable_1<T>::op_Explicit___UnityEngine__Playables__ScriptPlayable_1_T_(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<T>>(nullptr, ___internal_method, playable);
}
template <typename T> inline bool UnityEngine::Playables::ScriptPlayable_1<T>::Equals(::UnityEngine::Playables::ScriptPlayable_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::ScriptPlayable_1<T>>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Playables::ScriptPlayable_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
template <typename T> constexpr UnityEngine::Playables::ScriptPlayable_1<T>::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
template <typename T> constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Playables::ScriptPlayable_1<T>::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>"
template <typename T> constexpr UnityEngine::Playables::ScriptPlayable_1<T>::operator ::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*
UnityEngine::Playables::ScriptPlayable_1<T>::i___System__IEquatable_1___UnityEngine__Playables__ScriptPlayable_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::Playables::ScriptPlayable_1<T>::ScriptPlayable_1(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Playables::ScriptPlayable_1<T>::ScriptPlayable_1() {}
