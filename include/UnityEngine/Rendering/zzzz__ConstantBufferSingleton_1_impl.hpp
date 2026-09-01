#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ConstantBufferSingleton_1.hpp"
#include "UnityEngine/Rendering/zzzz__ConstantBuffer_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ConstantBufferSingleton_1_def.hpp"
template <typename CBType> inline void UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::setStaticF_s_Instance(::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*, "s_Instance", ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>(
      std::forward<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>(value));
}
template <typename CBType> inline ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*, "s_Instance", ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>();
}
template <typename CBType> inline ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>(nullptr, ___internal_method);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::set_instance(::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>(),
                                                                                         { "set_instance", {}, { ::i2c::type_of<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::Release() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename CBType> inline void UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename CBType> inline ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>* UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>*>());
}
// Ctor Parameters []
template <typename CBType> constexpr ::UnityEngine::Rendering::ConstantBufferSingleton_1<CBType>::ConstantBufferSingleton_1() {}
