#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\RuntimeFeature.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuntimeFeature_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeFeature.get_IsDynamicCodeSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Runtime::CompilerServices::RuntimeFeature::get_IsDynamicCodeSupported)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeFeature*>(), { "get_IsDynamicCodeSupported", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Runtime::CompilerServices::RuntimeFeature::get_IsDynamicCodeSupported() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::RuntimeFeature*>(), { "get_IsDynamicCodeSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::RuntimeFeature::RuntimeFeature() {}
