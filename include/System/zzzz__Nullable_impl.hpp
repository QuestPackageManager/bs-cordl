#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Nullable_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Nullable.GetUnderlyingType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Nullable::GetUnderlyingType)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x25b0004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Nullable*>::get(), "GetUnderlyingType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::System::Type* System::Nullable::GetUnderlyingType(::System::Type* nullableType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Nullable*>::get(), "GetUnderlyingType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, nullableType);
}
// Ctor Parameters []
constexpr ::System::Nullable::Nullable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
