#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz____Il2CppComObject_def.hpp"
//  Writing Method size for method: ::System::__Il2CppComObject.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Il2CppComObject::*)()>(&::System::__Il2CppComObject::Finalize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x367d758;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Il2CppComObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Il2CppComObject*>::get(), 1));
    return ___internal_method;
  }
};
inline void System::__Il2CppComObject::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Il2CppComObject*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__Il2CppComObject::__Il2CppComObject() {}
