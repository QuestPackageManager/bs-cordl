#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HashCodeCalculator_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
template <typename T> inline int32_t System::Net::Http::Headers::HashCodeCalculator::Calculate(::System::Collections::Generic::ICollection_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Http::Headers::HashCodeCalculator*>::get(), "Calculate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, list);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HashCodeCalculator::HashCodeCalculator() {}
