#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ITuple.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::ITuple.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::CompilerServices::ITuple::*)()>(&::System::Runtime::CompilerServices::ITuple::get_Length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ITuple*>(), { ::i2c::class_of<::System::Runtime::CompilerServices::ITuple*>(), 0 }));
    return ___internal_method;
  }
};
inline int32_t System::Runtime::CompilerServices::ITuple::get_Length() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::ITuple*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
