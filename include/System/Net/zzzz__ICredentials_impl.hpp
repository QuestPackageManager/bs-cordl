#pragma once
// IWYU pragma private; include "System/Net/ICredentials.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::ICredentials.GetCredential
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkCredential* (::System::Net::ICredentials::*)(::System::Uri*, ::StringW)>(&::System::Net::ICredentials::GetCredential)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ICredentials*>(), { ::i2c::class_of<::System::Net::ICredentials*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Net::NetworkCredential* System::Net::ICredentials::GetCredential(::System::Uri* uri, ::StringW authType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ICredentials*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*>(this, ___internal_method, uri, authType);
}
