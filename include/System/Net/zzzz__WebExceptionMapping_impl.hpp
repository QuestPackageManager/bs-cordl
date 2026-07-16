#pragma once
// IWYU pragma private; include "System/Net/WebExceptionMapping.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebExceptionMapping_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
//  Writing Method size for method: ::System::Net::WebExceptionMapping.GetWebStatusString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::WebExceptionStatus)>(&::System::Net::WebExceptionMapping::GetWebStatusString)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x640a0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebExceptionMapping*>(), { "GetWebStatusString", {}, { ::i2c::type_of<::System::Net::WebExceptionStatus>() } })));
    return ___internal_method;
  }
};
inline void System::Net::WebExceptionMapping::setStaticF_s_Mapping(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_Mapping", ::System::Net::WebExceptionMapping*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Net::WebExceptionMapping::getStaticF_s_Mapping() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_Mapping", ::System::Net::WebExceptionMapping*>();
}
inline ::StringW System::Net::WebExceptionMapping::GetWebStatusString(::System::Net::WebExceptionStatus status) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::WebExceptionMapping*>(), { "GetWebStatusString", {}, { ::i2c::type_of<::System::Net::WebExceptionStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, status);
}
// Ctor Parameters []
constexpr ::System::Net::WebExceptionMapping::WebExceptionMapping() {}
