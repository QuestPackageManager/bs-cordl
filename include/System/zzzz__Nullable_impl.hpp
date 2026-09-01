#pragma once
// IWYU pragma private; include "System\Nullable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Nullable_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Nullable.GetUnderlyingType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Nullable::GetUnderlyingType)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c4b3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable*>(), { "GetUnderlyingType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::System::Type* System::Nullable::GetUnderlyingType(::System::Type* nullableType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Nullable*>(), { "GetUnderlyingType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, nullableType);
}
// Ctor Parameters []
constexpr ::System::Nullable::Nullable() {}
