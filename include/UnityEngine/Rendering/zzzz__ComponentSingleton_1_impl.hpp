#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ComponentSingleton_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ComponentSingleton_1_def.hpp"
template <typename TType> inline void UnityEngine::Rendering::ComponentSingleton_1<TType>::setStaticF_s_Instance(TType value) {
  ::cordl_internals::setStaticField<TType, "s_Instance", ::UnityEngine::Rendering::ComponentSingleton_1<TType>*>(std::forward<TType>(value));
}
template <typename TType> inline TType UnityEngine::Rendering::ComponentSingleton_1<TType>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<TType, "s_Instance", ::UnityEngine::Rendering::ComponentSingleton_1<TType>*>();
}
template <typename TType> inline TType UnityEngine::Rendering::ComponentSingleton_1<TType>::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComponentSingleton_1<TType>*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TType>(nullptr, ___internal_method);
}
template <typename TType> inline void UnityEngine::Rendering::ComponentSingleton_1<TType>::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ComponentSingleton_1<TType>*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TType> constexpr ::UnityEngine::Rendering::ComponentSingleton_1<TType>::ComponentSingleton_1() {}
