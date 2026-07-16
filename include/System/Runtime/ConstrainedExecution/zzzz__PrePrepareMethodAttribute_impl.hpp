#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/PrePrepareMethodAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__PrePrepareMethodAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::*)()>(
    &::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6d5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute* System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute::PrePrepareMethodAttribute() {}
