#pragma once
// IWYU pragma private; include "GlobalNamespace\ICubeNoteControllerInitializable_1.hpp"
#include "GlobalNamespace/zzzz__ICubeNoteControllerInitializable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename T> inline void GlobalNamespace::ICubeNoteControllerInitializable_1<T>::add_cubeNoteControllerDidInitEvent(::System::Action_1<T>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ICubeNoteControllerInitializable_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::ICubeNoteControllerInitializable_1<T>::remove_cubeNoteControllerDidInitEvent(::System::Action_1<T>* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ICubeNoteControllerInitializable_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
