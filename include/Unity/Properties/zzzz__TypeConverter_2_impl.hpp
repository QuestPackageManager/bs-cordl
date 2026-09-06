#pragma once
// IWYU pragma private; include "Unity/Properties/TypeConverter_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Properties/zzzz__TypeConverter_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TSource, typename TDestination> inline void Unity::Properties::TypeConverter_2<TSource, TDestination>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Properties::TypeConverter_2<TSource, TDestination>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TSource, typename TDestination> inline TDestination Unity::Properties::TypeConverter_2<TSource, TDestination>::Invoke(::by_ref<TSource> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Properties::TypeConverter_2<TSource, TDestination>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TDestination>(this, ___internal_method, value);
}
template <typename TSource, typename TDestination>
inline ::Unity::Properties::TypeConverter_2<TSource, TDestination>* Unity::Properties::TypeConverter_2<TSource, TDestination>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Properties::TypeConverter_2<TSource, TDestination>*>(object, method));
}
// Ctor Parameters []
template <typename TSource, typename TDestination> constexpr ::Unity::Properties::TypeConverter_2<TSource, TDestination>::TypeConverter_2() {}
