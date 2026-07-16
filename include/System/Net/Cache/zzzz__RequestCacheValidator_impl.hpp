#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheValidator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCacheValidator_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCacheValidator.CreateValidator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Cache::RequestCacheValidator::*)()>(&::System::Net::Cache::RequestCacheValidator::CreateValidator)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x635234c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheValidator*>(), { "CreateValidator", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Object* System::Net::Cache::RequestCacheValidator::CreateValidator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheValidator*>(), { "CreateValidator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCacheValidator::RequestCacheValidator() {}
