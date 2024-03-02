#pragma once
#include "System/zzzz__ModifierSpec_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ModifierSpec.Resolve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::ModifierSpec::*)(::System::Type*)>(&::System::ModifierSpec::Resolve)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ModifierSpec*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ModifierSpec*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ModifierSpec.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (::System::ModifierSpec::*)(::System::Text::StringBuilder*)>(
    &::System::ModifierSpec::Append)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ModifierSpec*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ModifierSpec*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Type* System::ModifierSpec::Resolve(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ModifierSpec*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, type);
}
inline ::System::Text::StringBuilder* System::ModifierSpec::Append(::System::Text::StringBuilder* sb) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ModifierSpec*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(this, ___internal_method, sb);
}
