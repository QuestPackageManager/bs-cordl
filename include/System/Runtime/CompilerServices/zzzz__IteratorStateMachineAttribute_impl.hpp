#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\IteratorStateMachineAttribute.hpp"
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IteratorStateMachineAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::IteratorStateMachineAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::IteratorStateMachineAttribute::*)(::System::Type*)>(
    &::System::Runtime::CompilerServices::IteratorStateMachineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::IteratorStateMachineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::IteratorStateMachineAttribute::_ctor(::System::Type* stateMachineType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::IteratorStateMachineAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateMachineType);
}
inline ::System::Runtime::CompilerServices::IteratorStateMachineAttribute* System::Runtime::CompilerServices::IteratorStateMachineAttribute::New_ctor(::System::Type* stateMachineType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::IteratorStateMachineAttribute*>(stateMachineType));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::IteratorStateMachineAttribute::IteratorStateMachineAttribute() {}
