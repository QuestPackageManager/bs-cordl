#pragma once
#include "System/zzzz__SystemException_impl.hpp"
#include "System/Net/zzzz__InternalException_def.hpp"
//  Writing Method size for method: ::System::Net::InternalException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::InternalException::*)()>(&::System::Net::InternalException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281fea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::InternalException*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Net::InternalException* System::Net::InternalException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::InternalException*>());
}
inline void System::Net::InternalException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::InternalException*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::InternalException::InternalException() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
