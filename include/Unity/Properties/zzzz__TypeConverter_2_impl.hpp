#pragma once
// IWYU pragma private; include "Unity/Properties/TypeConverter_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Unity/Properties/zzzz__TypeConverter_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TSource, typename TDestination> inline void Unity::Properties::TypeConverter_2<TSource, TDestination>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeConverter_2<TSource, TDestination>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename TSource, typename TDestination> inline TDestination Unity::Properties::TypeConverter_2<TSource, TDestination>::Invoke(::ByRef<TSource> value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::TypeConverter_2<TSource, TDestination>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<TDestination, false>(this, ___internal_method, value);
}
template <typename TSource, typename TDestination>
inline ::Unity::Properties::TypeConverter_2<TSource, TDestination>* Unity::Properties::TypeConverter_2<TSource, TDestination>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Properties::TypeConverter_2<TSource, TDestination>*>(object, method));
}
// Ctor Parameters []
template <typename TSource, typename TDestination> constexpr ::Unity::Properties::TypeConverter_2<TSource, TDestination>::TypeConverter_2() {}
