#pragma once
// IWYU pragma private; include "GlobalNamespace/OVREnumerable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
template <typename T> inline int32_t GlobalNamespace::OVREnumerable::CopyTo(::GlobalNamespace::OVREnumerable_1<T> enumerable, T* memory) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVREnumerable*>::get(), "CopyTo",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVREnumerable_1<T>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, enumerable, memory);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVREnumerable::OVREnumerable() {}
