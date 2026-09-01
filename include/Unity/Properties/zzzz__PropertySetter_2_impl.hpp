#pragma once
// IWYU pragma private; include "Unity\Properties\PropertySetter_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Properties/zzzz__PropertySetter_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TContainer, typename TValue> inline void Unity::Properties::PropertySetter_2<TContainer, TValue>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::PropertySetter_2<TContainer, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TContainer, typename TValue> inline void Unity::Properties::PropertySetter_2<TContainer, TValue>::Invoke(::by_ref<TContainer> container, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::PropertySetter_2<TContainer, TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container, value);
}
template <typename TContainer, typename TValue>
inline ::Unity::Properties::PropertySetter_2<TContainer, TValue>* Unity::Properties::PropertySetter_2<TContainer, TValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::PropertySetter_2<TContainer, TValue>*>(object, method));
}
// Ctor Parameters []
template <typename TContainer, typename TValue> constexpr ::Unity::Properties::PropertySetter_2<TContainer, TValue>::PropertySetter_2() {}
