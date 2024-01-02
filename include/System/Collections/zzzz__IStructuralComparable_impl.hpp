#pragma once
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
//  Writing Method size for method: ::System::Collections::IStructuralComparable.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Collections::IStructuralComparable::*)(::System::Object*, ::System::Collections::IComparer*)>(
    &::System::Collections::IStructuralComparable::CompareTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::IStructuralComparable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::IStructuralComparable*>::get(), 0));
    return ___internal_method;
  }
};
inline int32_t System::Collections::IStructuralComparable::CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::IStructuralComparable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other, comparer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
