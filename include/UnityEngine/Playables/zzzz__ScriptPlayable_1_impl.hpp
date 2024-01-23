#pragma once
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
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
template <typename T> constexpr UnityEngine::Playables::ScriptPlayable_1<T>::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
template <typename T> constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Playables::ScriptPlayable_1<T>::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>"
template <typename T> constexpr UnityEngine::Playables::ScriptPlayable_1<T>::operator ::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*
UnityEngine::Playables::ScriptPlayable_1<T>::i___System__IEquatable_1___UnityEngine__Playables__ScriptPlayable_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Playables::ScriptPlayable_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void UnityEngine::Playables::ScriptPlayable_1<T>::setStaticF_m_NullPlayable(::UnityEngine::Playables::ScriptPlayable_1<T> value) {
  ::cordl_internals::setStaticField<::UnityEngine::Playables::ScriptPlayable_1<T>, "m_NullPlayable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get>(
      std::forward<::UnityEngine::Playables::ScriptPlayable_1<T>>(value));
}
template <typename T> inline ::UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::getStaticF_m_NullPlayable() {
  return ::cordl_internals::getStaticField<::UnityEngine::Playables::ScriptPlayable_1<T>, "m_NullPlayable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get>();
}
template <typename T> inline ::UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::get_Null() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "get_Null",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<T>, false>(nullptr, ___internal_method);
}
/// @param inputCount: int32_t (default: static_cast<int32_t>(0x0))
template <typename T> inline ::UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<T>, false>(nullptr, ___internal_method, graph, inputCount);
}
/// @param inputCount: int32_t (default: static_cast<int32_t>(0x0))
template <typename T>
inline ::UnityEngine::Playables::ScriptPlayable_1<T> UnityEngine::Playables::ScriptPlayable_1<T>::Create(::UnityEngine::Playables::PlayableGraph graph, T _cordl_template, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<T>, false>(nullptr, ___internal_method, graph, _cordl_template, inputCount);
}
template <typename T>
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::ScriptPlayable_1<T>::CreateHandle(::UnityEngine::Playables::PlayableGraph graph, T _cordl_template, int32_t inputCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "CreateHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle, false>(nullptr, ___internal_method, graph, _cordl_template, inputCount);
}
template <typename T> inline ::System::Object* UnityEngine::Playables::ScriptPlayable_1<T>::CreateScriptInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                                                                             "CreateScriptInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
template <typename T> inline ::System::Object* UnityEngine::Playables::ScriptPlayable_1<T>::CloneScriptInstance(::UnityEngine::Playables::IPlayableBehaviour* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "CloneScriptInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::IPlayableBehaviour*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, source);
}
template <typename T> inline ::System::Object* UnityEngine::Playables::ScriptPlayable_1<T>::CloneScriptInstanceFromEngineObject(::UnityEngine::Object* source) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "CloneScriptInstanceFromEngineObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, source);
}
template <typename T> inline ::System::Object* UnityEngine::Playables::ScriptPlayable_1<T>::CloneScriptInstanceFromIClonable(::System::ICloneable* source) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "CloneScriptInstanceFromIClonable",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ICloneable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, source);
}
template <typename T> inline void UnityEngine::Playables::ScriptPlayable_1<T>::_ctor(::UnityEngine::Playables::PlayableHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
template <typename T> inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Playables::ScriptPlayable_1<T>::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "GetHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Playables::ScriptPlayable_1<T>::GetBehaviour() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(),
                                                                             "GetBehaviour", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Playables::Playable UnityEngine::Playables::ScriptPlayable_1<T>::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Playables::ScriptPlayable_1<T> playable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::ScriptPlayable_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(nullptr, ___internal_method, playable);
}
template <typename T>
inline ::UnityEngine::Playables::ScriptPlayable_1<T>
UnityEngine::Playables::ScriptPlayable_1<T>::op_Explicit___UnityEngine__Playables__ScriptPlayable_1_T_(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<T>, false>(nullptr, ___internal_method, playable);
}
template <typename T> inline bool UnityEngine::Playables::ScriptPlayable_1<T>::Equals(::UnityEngine::Playables::ScriptPlayable_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::ScriptPlayable_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::ScriptPlayable_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::Playables::ScriptPlayable_1<T>::ScriptPlayable_1(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Playables::ScriptPlayable_1<T>::ScriptPlayable_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
