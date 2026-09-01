#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\ReadOnlyArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArrayExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
template <typename TValue> inline bool UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions::Contains(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions*>(),
                                       { "Contains", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, value);
}
template <typename TValue>
inline bool UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions::ContainsReference(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions*>(),
                          { "ContainsReference", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, value);
}
template <typename TValue>
inline int32_t UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions::IndexOfReference(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array, TValue value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions*>(),
                          { "IndexOfReference", { ::i2c::class_of<TValue>() }, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename TValue>
inline bool UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions::HaveEqualReferences(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue> array1,
                                                                                              ::System::Collections::Generic::IReadOnlyList_1<TValue>* array2, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions*>(),
                                                           { "HaveEqualReferences",
                                                             { ::i2c::class_of<TValue>() },
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<TValue>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<TValue>*>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array1, array2, count);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArrayExtensions::ReadOnlyArrayExtensions() {}
