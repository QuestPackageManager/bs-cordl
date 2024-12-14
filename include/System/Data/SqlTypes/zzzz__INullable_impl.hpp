#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/INullable.hpp"
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::INullable.get_IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::SqlTypes::INullable::*)()>(&::System::Data::SqlTypes::INullable::get_IsNull)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::INullable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::INullable*>::get(), 0));
    return ___internal_method;
  }
};
inline bool System::Data::SqlTypes::INullable::get_IsNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::SqlTypes::INullable*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
