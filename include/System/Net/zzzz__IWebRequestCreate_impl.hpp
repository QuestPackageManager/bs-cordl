#pragma once
// IWYU pragma private; include "System/Net/IWebRequestCreate.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::IWebRequestCreate.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequest* (::System::Net::IWebRequestCreate::*)(::System::Uri*)>(&::System::Net::IWebRequestCreate::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::IWebRequestCreate*>(), { ::i2c::class_of<::System::Net::IWebRequestCreate*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Net::WebRequest* System::Net::IWebRequestCreate::Create(::System::Uri* uri) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::IWebRequestCreate*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*>(this, ___internal_method, uri);
}
