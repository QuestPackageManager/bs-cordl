#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBag.hpp"
#include "Unity/Properties/zzzz__IPropertyBag_def.hpp"
#include "Unity/Properties/zzzz__ITypeVisitor_def.hpp"
//  Writing Method size for method: ::Unity::Properties::IPropertyBag.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Properties::IPropertyBag::*)(::Unity::Properties::ITypeVisitor*)>(
    &::Unity::Properties::IPropertyBag::Accept)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IPropertyBag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IPropertyBag*>::get(), 0));
    return ___internal_method;
  }
};
inline void Unity::Properties::IPropertyBag::Accept(::Unity::Properties::ITypeVisitor* visitor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Properties::IPropertyBag*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, visitor);
}
