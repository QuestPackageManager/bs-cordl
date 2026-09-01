#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\CallerFilePathAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CallerFilePathAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::CallerFilePathAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::CallerFilePathAttribute::*)()>(
    &::System::Runtime::CompilerServices::CallerFilePathAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6fcc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallerFilePathAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::CallerFilePathAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::CallerFilePathAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::CompilerServices::CallerFilePathAttribute* System::Runtime::CompilerServices::CallerFilePathAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::CallerFilePathAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::CallerFilePathAttribute::CallerFilePathAttribute() {}
