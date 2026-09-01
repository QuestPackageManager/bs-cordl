#pragma once
// IWYU pragma private; include "System\IServiceProvider.hpp"
#include "System/zzzz__IServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::IServiceProvider.GetService
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::IServiceProvider::*)(::System::Type*)>(&::System::IServiceProvider::GetService)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IServiceProvider*>(), { ::i2c::class_of<::System::IServiceProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::IServiceProvider::GetService(::System::Type* serviceType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IServiceProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, serviceType);
}
