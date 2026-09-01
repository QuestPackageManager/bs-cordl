#pragma once
// IWYU pragma private; include "GlobalNamespace\UnityPlayerLoopMarker_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/LowLevel/zzzz__PlayerLoopSystem_impl.hpp"
#include "GlobalNamespace/zzzz__UnityPlayerLoopMarker_1_def.hpp"
template <typename T> inline void GlobalNamespace::UnityPlayerLoopMarker_1<T>::setStaticF_frame(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "frame", ::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>(std::forward<int32_t>(value));
}
template <typename T> inline int32_t GlobalNamespace::UnityPlayerLoopMarker_1<T>::getStaticF_frame() {
  return ::cordl_internals::getStaticField<int32_t, "frame", ::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>();
}
template <typename T> inline void GlobalNamespace::UnityPlayerLoopMarker_1<T>::setStaticF_time(double_t value) {
  ::cordl_internals::setStaticField<double_t, "time", ::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>(std::forward<double_t>(value));
}
template <typename T> inline double_t GlobalNamespace::UnityPlayerLoopMarker_1<T>::getStaticF_time() {
  return ::cordl_internals::getStaticField<double_t, "time", ::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>();
}
template <typename T> inline void GlobalNamespace::UnityPlayerLoopMarker_1<T>::setStaticF_previousTime(double_t value) {
  ::cordl_internals::setStaticField<double_t, "previousTime", ::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>(std::forward<double_t>(value));
}
template <typename T> inline double_t GlobalNamespace::UnityPlayerLoopMarker_1<T>::getStaticF_previousTime() {
  return ::cordl_internals::getStaticField<double_t, "previousTime", ::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>();
}
template <typename T> inline void GlobalNamespace::UnityPlayerLoopMarker_1<T>::setStaticF_kSystem(::UnityEngine::LowLevel::PlayerLoopSystem value) {
  ::cordl_internals::setStaticField<::UnityEngine::LowLevel::PlayerLoopSystem, "kSystem", ::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>(
      std::forward<::UnityEngine::LowLevel::PlayerLoopSystem>(value));
}
template <typename T> inline ::UnityEngine::LowLevel::PlayerLoopSystem GlobalNamespace::UnityPlayerLoopMarker_1<T>::getStaticF_kSystem() {
  return ::cordl_internals::getStaticField<::UnityEngine::LowLevel::PlayerLoopSystem, "kSystem", ::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>();
}
template <typename T> inline double_t GlobalNamespace::UnityPlayerLoopMarker_1<T>::get_LastFrameTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>(), { "get_LastFrameTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::UnityPlayerLoopMarker_1<T>::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline void GlobalNamespace::UnityPlayerLoopMarker_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::UnityPlayerLoopMarker_1<T>* GlobalNamespace::UnityPlayerLoopMarker_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UnityPlayerLoopMarker_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::UnityPlayerLoopMarker_1<T>::UnityPlayerLoopMarker_1() {}
