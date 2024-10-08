#pragma once
// IWYU pragma private; include "Unity/Properties/PropertyBag.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Properties/zzzz__PropertyBag_def.hpp"
#include "Unity/Properties/zzzz__PropertyBag_1_def.hpp"
template <typename TContainer> inline void Unity::Properties::PropertyBag::Register(::Unity::Properties::PropertyBag_1<TContainer>* propertyBag) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::PropertyBag*>::get(), "Register",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Properties::PropertyBag_1<TContainer>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContainer>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, propertyBag);
}
// Ctor Parameters []
constexpr ::Unity::Properties::PropertyBag::PropertyBag() {}
