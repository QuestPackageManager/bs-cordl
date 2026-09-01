#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\InputArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InputArrayExtensions_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
template <typename TValue>
inline int32_t UnityEngine::InputSystem::Utilities::InputArrayExtensions::IndexOfReference(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::InputArrayExtensions*>(),
                          { "IndexOfReference", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename TValue> inline bool UnityEngine::InputSystem::Utilities::InputArrayExtensions::Contains(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::InputArrayExtensions*>(),
                                       { "Contains", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, value);
}
template <typename TValue> inline bool UnityEngine::InputSystem::Utilities::InputArrayExtensions::ContainsReference(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::InputArrayExtensions*>(),
                          { "ContainsReference", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue>>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::InputArrayExtensions::InputArrayExtensions() {}
