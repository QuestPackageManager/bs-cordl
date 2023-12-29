#pragma once
#include "Newtonsoft/Json/Serialization/zzzz__IContractResolver_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__JsonContract_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IContractResolver.ResolveContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Serialization::JsonContract* (
    ::Newtonsoft::Json::Serialization::IContractResolver::*)(::System::Type*)>(&::Newtonsoft::Json::Serialization::IContractResolver::ResolveContract)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::IContractResolver*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::IContractResolver*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Newtonsoft::Json::Serialization::JsonContract* Newtonsoft::Json::Serialization::IContractResolver::ResolveContract(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::IContractResolver*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Serialization::JsonContract*, false>(this, ___internal_method, type);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
