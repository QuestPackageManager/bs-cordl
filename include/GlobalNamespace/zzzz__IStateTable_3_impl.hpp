#pragma once
// IWYU pragma private; include "GlobalNamespace\IStateTable_3.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::GetState(TType type) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<TState>(this, ___internal_method, type);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::SetState(TType type, TState state) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, state);
}
template <typename TStateTable, typename TType, typename TState> inline TStateTable GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::GetDelta(::by_ref<TStateTable> stateTable) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<TStateTable>(this, ___internal_method, stateTable);
}
template <typename TStateTable, typename TType, typename TState> inline TStateTable GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::ApplyDelta(::by_ref<TStateTable> delta) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<TStateTable>(this, ___internal_method, delta);
}
template <typename TStateTable, typename TType, typename TState> inline int32_t GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::GetSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
