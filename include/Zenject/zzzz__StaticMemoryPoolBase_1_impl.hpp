#pragma once
// IWYU pragma private; include "Zenject\StaticMemoryPoolBase_1.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename TValue> inline void Zenject::StaticMemoryPoolBase_1<TValue>::_ctor(::System::Action_1<TValue>* onDespawnedMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBase_1<TValue>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onDespawnedMethod);
}
template <typename TValue> inline TValue Zenject::StaticMemoryPoolBase_1<TValue>::Alloc() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::StaticMemoryPoolBase_1<TValue>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue> inline ::Zenject::StaticMemoryPoolBase_1<TValue>* Zenject::StaticMemoryPoolBase_1<TValue>::New_ctor(::System::Action_1<TValue>* onDespawnedMethod) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::StaticMemoryPoolBase_1<TValue>*>(onDespawnedMethod));
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::StaticMemoryPoolBase_1<TValue>::StaticMemoryPoolBase_1() {}
