#pragma once
// IWYU pragma private; include "System\Net\ServiceNameStore.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__ServiceNameStore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ServiceNameCollection_def.hpp"
//  Writing Method size for method: ::System::Net::ServiceNameStore._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ServiceNameStore::*)()>(&::System::Net::ServiceNameStore::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6417d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServiceNameStore*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Net::ServiceNameStore::__cordl_internal_get_serviceNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceNames;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Net::ServiceNameStore::__cordl_internal_get_serviceNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceNames;
}
constexpr void System::Net::ServiceNameStore::__cordl_internal_set_serviceNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serviceNames = value;
}
constexpr ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*& System::Net::ServiceNameStore::__cordl_internal_get_serviceNameCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceNameCollection;
}
constexpr ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* const& System::Net::ServiceNameStore::__cordl_internal_get_serviceNameCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___serviceNameCollection;
}
constexpr void System::Net::ServiceNameStore::__cordl_internal_set_serviceNameCollection(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___serviceNameCollection = value;
}
inline void System::Net::ServiceNameStore::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::ServiceNameStore*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::ServiceNameStore* System::Net::ServiceNameStore::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::ServiceNameStore*>());
}
// Ctor Parameters []
constexpr ::System::Net::ServiceNameStore::ServiceNameStore() {}
