#pragma once
// IWYU pragma private; include "System\Collections\Generic\TreeWalkPredicate_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Collections/Generic/zzzz__TreeWalkPredicate_1_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline void System::Collections::Generic::TreeWalkPredicate_1<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::TreeWalkPredicate_1<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T> inline bool System::Collections::Generic::TreeWalkPredicate_1<T>::Invoke(::System::Collections::Generic::SortedSet_1_Node<T>* node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::TreeWalkPredicate_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename T> inline ::System::Collections::Generic::TreeWalkPredicate_1<T>* System::Collections::Generic::TreeWalkPredicate_1<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::TreeWalkPredicate_1<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::TreeWalkPredicate_1<T>::TreeWalkPredicate_1() {}
