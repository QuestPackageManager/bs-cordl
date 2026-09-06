#pragma once
// IWYU pragma private; include "System/IFormattable.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
//  Writing Method size for method: ::System::IFormattable.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IFormattable::*)(::StringW, ::System::IFormatProvider*)>(&::System::IFormattable::ToString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IFormattable*>(), { ::i2c::class_of<::System::IFormattable*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW System::IFormattable::ToString(::StringW format, ::System::IFormatProvider* formatProvider) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IFormattable*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format, formatProvider);
}
