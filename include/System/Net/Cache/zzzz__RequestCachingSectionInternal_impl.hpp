#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCachingSectionInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCachingSectionInternal_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCachingSectionInternal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Cache::RequestCachingSectionInternal::*)()>(
    &::System::Net::Cache::RequestCachingSectionInternal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x43ef1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachingSectionInternal*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Cache::RequestCachingSectionInternal::__cordl_internal_get_DisableAllCaching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableAllCaching;
}
constexpr bool const& System::Net::Cache::RequestCachingSectionInternal::__cordl_internal_get_DisableAllCaching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisableAllCaching;
}
constexpr void System::Net::Cache::RequestCachingSectionInternal::__cordl_internal_set_DisableAllCaching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DisableAllCaching = value;
}
inline void System::Net::Cache::RequestCachingSectionInternal::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCachingSectionInternal*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCachingSectionInternal* System::Net::Cache::RequestCachingSectionInternal::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Cache::RequestCachingSectionInternal*>());
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCachingSectionInternal::RequestCachingSectionInternal() {}
