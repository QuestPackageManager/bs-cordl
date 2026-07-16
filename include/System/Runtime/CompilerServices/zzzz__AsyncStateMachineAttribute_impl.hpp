#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncStateMachineAttribute.hpp"
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncStateMachineAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncStateMachineAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::AsyncStateMachineAttribute::*)(::System::Type*)>(
    &::System::Runtime::CompilerServices::AsyncStateMachineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b6d5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncStateMachineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::AsyncStateMachineAttribute::_ctor(::System::Type* stateMachineType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncStateMachineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachineType);
}
inline ::System::Runtime::CompilerServices::AsyncStateMachineAttribute* System::Runtime::CompilerServices::AsyncStateMachineAttribute::New_ctor(::System::Type* stateMachineType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::AsyncStateMachineAttribute*>(stateMachineType));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncStateMachineAttribute::AsyncStateMachineAttribute() {}
