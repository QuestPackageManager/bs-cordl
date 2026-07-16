#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RuntimeVariables.hpp"
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeVariables_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IRuntimeVariables_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RuntimeVariables._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::RuntimeVariables::*)(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>)>(
    &::System::Linq::Expressions::Interpreter::RuntimeVariables::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb7360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::RuntimeVariables*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::RuntimeVariables.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::CompilerServices::IRuntimeVariables* (*)(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>)>(
    &::System::Linq::Expressions::Interpreter::RuntimeVariables::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5fae1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::RuntimeVariables*>(),
                                                                                           { "Create", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>& System::Linq::Expressions::Interpreter::RuntimeVariables::__cordl_internal_get__boxes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxes;
}
constexpr ::ArrayW<::System::Runtime::CompilerServices::IStrongBox*> const& System::Linq::Expressions::Interpreter::RuntimeVariables::__cordl_internal_get__boxes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boxes;
}
constexpr void System::Linq::Expressions::Interpreter::RuntimeVariables::__cordl_internal_set__boxes(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boxes = value;
}
inline void System::Linq::Expressions::Interpreter::RuntimeVariables::_ctor(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*> boxes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::RuntimeVariables*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boxes);
}
inline ::System::Runtime::CompilerServices::IRuntimeVariables* System::Linq::Expressions::Interpreter::RuntimeVariables::Create(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*> boxes) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::RuntimeVariables*>(),
                                                                                         { "Create", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::IRuntimeVariables*>(nullptr, ___internal_method, boxes);
}
inline ::System::Linq::Expressions::Interpreter::RuntimeVariables*
System::Linq::Expressions::Interpreter::RuntimeVariables::New_ctor(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*> boxes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::RuntimeVariables*>(boxes));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IRuntimeVariables"
constexpr System::Linq::Expressions::Interpreter::RuntimeVariables::operator ::System::Runtime::CompilerServices::IRuntimeVariables*() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IRuntimeVariables*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IRuntimeVariables"
constexpr ::System::Runtime::CompilerServices::IRuntimeVariables* System::Linq::Expressions::Interpreter::RuntimeVariables::i___System__Runtime__CompilerServices__IRuntimeVariables() noexcept {
  return static_cast<::System::Runtime::CompilerServices::IRuntimeVariables*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::RuntimeVariables::RuntimeVariables() {}
