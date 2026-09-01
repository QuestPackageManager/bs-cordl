#pragma once
// IWYU pragma private; include "System\IFormatProvider.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::IFormatProvider.GetFormat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::IFormatProvider::*)(::System::Type*)>(&::System::IFormatProvider::GetFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IFormatProvider*>(), { ::i2c::class_of<::System::IFormatProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::System::Object* System::IFormatProvider::GetFormat(::System::Type* formatType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IFormatProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, formatType);
}
