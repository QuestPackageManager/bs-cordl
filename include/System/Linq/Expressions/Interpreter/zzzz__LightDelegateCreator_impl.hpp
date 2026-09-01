#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LightDelegateCreator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightDelegateCreator_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Interpreter_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightDelegateCreator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::LightDelegateCreator::*)(
    ::System::Linq::Expressions::Interpreter::Interpreter*, ::System::Linq::Expressions::LambdaExpression*)>(&::System::Linq::Expressions::Interpreter::LightDelegateCreator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faf198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::Interpreter*>(), ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightDelegateCreator.get_Interpreter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Linq::Expressions::Interpreter::Interpreter* (::System::Linq::Expressions::Interpreter::LightDelegateCreator::*)()>(
    &::System::Linq::Expressions::Interpreter::LightDelegateCreator::get_Interpreter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faf1a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(), { "get_Interpreter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightDelegateCreator.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (::System::Linq::Expressions::Interpreter::LightDelegateCreator::*)()>(
    &::System::Linq::Expressions::Interpreter::LightDelegateCreator::CreateDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faf1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(), { "CreateDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightDelegateCreator.CreateDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Delegate* (::System::Linq::Expressions::Interpreter::LightDelegateCreator::*)(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>)>(
        &::System::Linq::Expressions::Interpreter::LightDelegateCreator::CreateDelegate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5faf1b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(),
                                                             { "CreateDelegate", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::LambdaExpression*& System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_get__lambda() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lambda;
}
constexpr ::System::Linq::Expressions::LambdaExpression* const& System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_get__lambda() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lambda;
}
constexpr void System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_set__lambda(::System::Linq::Expressions::LambdaExpression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lambda = value;
}
constexpr ::System::Linq::Expressions::Interpreter::Interpreter*& System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_get__Interpreter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Interpreter_k__BackingField;
}
constexpr ::System::Linq::Expressions::Interpreter::Interpreter* const& System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_get__Interpreter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Interpreter_k__BackingField;
}
constexpr void System::Linq::Expressions::Interpreter::LightDelegateCreator::__cordl_internal_set__Interpreter_k__BackingField(::System::Linq::Expressions::Interpreter::Interpreter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Interpreter_k__BackingField = value;
}
inline void System::Linq::Expressions::Interpreter::LightDelegateCreator::_ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter,
                                                                                ::System::Linq::Expressions::LambdaExpression* lambda) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::Interpreter*>(), ::i2c::type_of<::System::Linq::Expressions::LambdaExpression*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interpreter, lambda);
}
inline ::System::Linq::Expressions::Interpreter::Interpreter* System::Linq::Expressions::Interpreter::LightDelegateCreator::get_Interpreter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(), { "get_Interpreter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Interpreter*>(this, ___internal_method);
}
inline ::System::Delegate* System::Linq::Expressions::Interpreter::LightDelegateCreator::CreateDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(), { "CreateDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method);
}
inline ::System::Delegate* System::Linq::Expressions::Interpreter::LightDelegateCreator::CreateDelegate(::ArrayW<::System::Runtime::CompilerServices::IStrongBox*> closure) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(),
                                                                                         { "CreateDelegate", {}, { ::i2c::type_of<::ArrayW<::System::Runtime::CompilerServices::IStrongBox*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(this, ___internal_method, closure);
}
inline ::System::Linq::Expressions::Interpreter::LightDelegateCreator*
System::Linq::Expressions::Interpreter::LightDelegateCreator::New_ctor(::System::Linq::Expressions::Interpreter::Interpreter* interpreter, ::System::Linq::Expressions::LambdaExpression* lambda) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::LightDelegateCreator*>(interpreter, lambda));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LightDelegateCreator::LightDelegateCreator() {}
