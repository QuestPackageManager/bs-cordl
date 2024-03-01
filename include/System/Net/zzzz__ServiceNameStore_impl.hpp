#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServiceNameStore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ServiceNameCollection_def.hpp"
//  Writing Method size for method: ::System::Net::ServiceNameStore._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::ServiceNameStore::*)()>(&::System::Net::ServiceNameStore::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a94428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServiceNameStore*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Net::ServiceNameStore::__cordl_internal_get_serviceNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceNames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& System::Net::ServiceNameStore::__cordl_internal_get_serviceNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceNames;
}
constexpr void System::Net::ServiceNameStore::__cordl_internal_set_serviceNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serviceNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*& System::Net::ServiceNameStore::__cordl_internal_get_serviceNameCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceNameCollection;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*> const&
System::Net::ServiceNameStore::__cordl_internal_get_serviceNameCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceNameCollection;
}
constexpr void System::Net::ServiceNameStore::__cordl_internal_set_serviceNameCollection(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___serviceNameCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::ServiceNameStore* System::Net::ServiceNameStore::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::ServiceNameStore*>());
}
inline void System::Net::ServiceNameStore::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::ServiceNameStore*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::ServiceNameStore::ServiceNameStore() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
