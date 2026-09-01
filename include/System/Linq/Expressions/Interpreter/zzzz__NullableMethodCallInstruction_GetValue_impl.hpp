#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NullableMethodCallInstruction_GetValue.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_GetValue_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_GetValue.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NullableMethodCallInstruction_GetValue::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NullableMethodCallInstruction_GetValue::Run)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fbf248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_GetValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullableMethodCallInstruction_GetValue::*)()>(&::GlobalNamespace::NullableMethodCallInstruction_GetValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbf148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NullableMethodCallInstruction_GetValue::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NullableMethodCallInstruction_GetValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NullableMethodCallInstruction_GetValue* GlobalNamespace::NullableMethodCallInstruction_GetValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullableMethodCallInstruction_GetValue*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullableMethodCallInstruction_GetValue::NullableMethodCallInstruction_GetValue() {}
