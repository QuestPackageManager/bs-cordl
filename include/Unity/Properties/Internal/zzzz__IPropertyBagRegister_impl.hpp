#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/IPropertyBagRegister.hpp"
#include "Unity/Properties/Internal/zzzz__IPropertyBagRegister_def.hpp"
//  Writing Method size for method: ::Unity::Properties::Internal::IPropertyBagRegister.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::Internal::IPropertyBagRegister::*)()>(
    &::Unity::Properties::Internal::IPropertyBagRegister::Register)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IPropertyBagRegister*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IPropertyBagRegister*>::get(), 0));
    return ___internal_method;
  }
};
inline void Unity::Properties::Internal::IPropertyBagRegister::Register() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::Internal::IPropertyBagRegister*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
