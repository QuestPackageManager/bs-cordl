#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheProtocol.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCacheProtocol_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCacheProtocol._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Cache::RequestCacheProtocol::*)(::System::Object*, ::System::Object*)>(
    &::System::Net::Cache::RequestCacheProtocol::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x635243c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheProtocol*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Cache::RequestCacheProtocol::_ctor(::System::Object* arg1, ::System::Object* arg2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheProtocol*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2);
}
inline ::System::Net::Cache::RequestCacheProtocol* System::Net::Cache::RequestCacheProtocol::New_ctor(::System::Object* arg1, ::System::Object* arg2) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Cache::RequestCacheProtocol*>(arg1, arg2));
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCacheProtocol::RequestCacheProtocol() {}
