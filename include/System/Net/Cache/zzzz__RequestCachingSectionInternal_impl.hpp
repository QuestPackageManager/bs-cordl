#pragma once
// IWYU pragma private; include "System\Net\Cache\RequestCachingSectionInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCachingSectionInternal_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCachingSectionInternal._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Cache::RequestCachingSectionInternal::*)()>(&::System::Net::Cache::RequestCachingSectionInternal::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6357a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCachingSectionInternal*>(), { ".ctor", {}, {} })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCachingSectionInternal*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCachingSectionInternal* System::Net::Cache::RequestCachingSectionInternal::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Cache::RequestCachingSectionInternal*>());
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCachingSectionInternal::RequestCachingSectionInternal() {}
