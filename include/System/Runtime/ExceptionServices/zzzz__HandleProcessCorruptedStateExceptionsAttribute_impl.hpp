#pragma once
// IWYU pragma private; include "System\Runtime\ExceptionServices\HandleProcessCorruptedStateExceptionsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/ExceptionServices/zzzz__HandleProcessCorruptedStateExceptionsAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::*)()>(
    &::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b6f654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute* System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::ExceptionServices::HandleProcessCorruptedStateExceptionsAttribute::HandleProcessCorruptedStateExceptionsAttribute() {}
