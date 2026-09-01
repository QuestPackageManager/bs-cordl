#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NullableMethodCallInstruction_HasValue.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_HasValue_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_HasValue.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NullableMethodCallInstruction_HasValue::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NullableMethodCallInstruction_HasValue::Run)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fbf20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_HasValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullableMethodCallInstruction_HasValue::*)()>(&::GlobalNamespace::NullableMethodCallInstruction_HasValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbf144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NullableMethodCallInstruction_HasValue::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NullableMethodCallInstruction_HasValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NullableMethodCallInstruction_HasValue* GlobalNamespace::NullableMethodCallInstruction_HasValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullableMethodCallInstruction_HasValue*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullableMethodCallInstruction_HasValue::NullableMethodCallInstruction_HasValue() {}
