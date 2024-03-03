#pragma once
#include "System/zzzz__ICustomFormatter_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ICustomFormatter.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::ICustomFormatter::*)(::StringW, ::System::Object*, ::System::IFormatProvider*)>(
    &::System::ICustomFormatter::Format)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ICustomFormatter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ICustomFormatter*>::get(), 0));
    return ___internal_method;
  }
};
inline ::StringW System::ICustomFormatter::Format(::StringW format, ::System::Object* arg, ::System::IFormatProvider* formatProvider) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ICustomFormatter*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, format, arg, formatProvider);
}
