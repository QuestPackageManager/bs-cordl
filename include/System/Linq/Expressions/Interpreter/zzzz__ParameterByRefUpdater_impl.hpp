#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\ParameterByRefUpdater.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ParameterByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ParameterByRefUpdater._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::*)(::System::Linq::Expressions::Interpreter::LocalVariable*, int32_t)>(
    &::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fae638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalVariable*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::ParameterByRefUpdater.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*)>(&::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::Update)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5fae644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>(),
                                                                                          { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::LocalVariable*& System::Linq::Expressions::Interpreter::ParameterByRefUpdater::__cordl_internal_get__parameter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameter;
}
constexpr ::System::Linq::Expressions::Interpreter::LocalVariable* const& System::Linq::Expressions::Interpreter::ParameterByRefUpdater::__cordl_internal_get__parameter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameter;
}
constexpr void System::Linq::Expressions::Interpreter::ParameterByRefUpdater::__cordl_internal_set__parameter(::System::Linq::Expressions::Interpreter::LocalVariable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parameter = value;
}
inline void System::Linq::Expressions::Interpreter::ParameterByRefUpdater::_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* parameter, int32_t argumentIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Linq::Expressions::Interpreter::LocalVariable*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameter, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::ParameterByRefUpdater::Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame, value);
}
inline ::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*
System::Linq::Expressions::Interpreter::ParameterByRefUpdater::New_ctor(::System::Linq::Expressions::Interpreter::LocalVariable* parameter, int32_t argumentIndex) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Expressions::Interpreter::ParameterByRefUpdater*>(parameter, argumentIndex));
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::ParameterByRefUpdater::ParameterByRefUpdater() {}
