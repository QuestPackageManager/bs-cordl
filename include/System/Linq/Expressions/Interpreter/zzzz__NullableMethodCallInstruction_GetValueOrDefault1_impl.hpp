#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NullableMethodCallInstruction_GetValueOrDefault1.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_GetValueOrDefault1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::*)()>(
    &::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbf30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::Run)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fbf314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::*)()>(
    &::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbf188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::get_ConsumedStack() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1* GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullableMethodCallInstruction_GetValueOrDefault1::NullableMethodCallInstruction_GetValueOrDefault1() {}
