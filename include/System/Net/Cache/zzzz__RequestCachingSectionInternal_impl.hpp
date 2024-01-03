#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCachingSectionInternal_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCachingSectionInternal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Cache::RequestCachingSectionInternal::*)()>(
    &::System::Net::Cache::RequestCachingSectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29f12b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachingSectionInternal*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Cache::RequestCachingSectionInternal::__get_DisableAllCaching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableAllCaching;
}
constexpr bool const& System::Net::Cache::RequestCachingSectionInternal::__get_DisableAllCaching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableAllCaching;
}
constexpr void System::Net::Cache::RequestCachingSectionInternal::__set_DisableAllCaching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisableAllCaching = value;
}
inline ::System::Net::Cache::RequestCachingSectionInternal* System::Net::Cache::RequestCachingSectionInternal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Cache::RequestCachingSectionInternal*>());
}
inline void System::Net::Cache::RequestCachingSectionInternal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachingSectionInternal*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCachingSectionInternal::RequestCachingSectionInternal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
