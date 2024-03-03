#pragma once
#include "Zenject/zzzz__IAnimatorIkHandler_def.hpp"
//  Writing Method size for method: ::Zenject::IAnimatorIkHandler.OnAnimatorIk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::IAnimatorIkHandler::*)()>(&::Zenject::IAnimatorIkHandler::OnAnimatorIk)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IAnimatorIkHandler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IAnimatorIkHandler*>::get(), 0));
    return ___internal_method;
  }
};
inline void Zenject::IAnimatorIkHandler::OnAnimatorIk() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IAnimatorIkHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
