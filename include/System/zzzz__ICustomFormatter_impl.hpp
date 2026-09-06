#pragma once
// IWYU pragma private; include "System/ICustomFormatter.hpp"
#include "System/zzzz__ICustomFormatter_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ICustomFormatter.Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::ICustomFormatter::*)(::StringW, ::System::Object*, ::System::IFormatProvider*)>(&::System::ICustomFormatter::Format)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::ICustomFormatter*>(), { ::i2c::class_of<::System::ICustomFormatter*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW System::ICustomFormatter::Format(::StringW format, ::System::Object* arg, ::System::IFormatProvider* formatProvider) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::ICustomFormatter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, format, arg, formatProvider);
}
