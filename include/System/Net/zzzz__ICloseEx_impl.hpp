#pragma once
// IWYU pragma private; include "System/Net/ICloseEx.hpp"
#include "System/Net/zzzz__ICloseEx_def.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
//  Writing Method size for method: ::System::Net::ICloseEx.CloseEx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::ICloseEx::*)(::System::Net::CloseExState)>(&::System::Net::ICloseEx::CloseEx)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::ICloseEx*>(), { ::i2c::class_of<::System::Net::ICloseEx*>(), 0 }));
    return ___internal_method;
  }
};
inline void System::Net::ICloseEx::CloseEx(::System::Net::CloseExState closeState) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::ICloseEx*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeState);
}
