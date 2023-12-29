#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ArrayHelpers_def.hpp"
template <typename T> inline ::ArrayW<T, ::Array<T>*> GlobalNamespace::ArrayHelpers::CreateOrEnlargeArray(::ArrayW<T, ::Array<T>*> array, int32_t minimumCapacity) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayHelpers*>::get(), "CreateOrEnlargeArray",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(nullptr, ___internal_method, array, minimumCapacity);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArrayHelpers::ArrayHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
