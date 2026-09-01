#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\NullableMethodCallInstruction_EqualsClass.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_EqualsClass_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_EqualsClass.get_ConsumedStack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NullableMethodCallInstruction_EqualsClass::*)()>(
    &::GlobalNamespace::NullableMethodCallInstruction_EqualsClass::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fbf368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_EqualsClass*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_EqualsClass*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_EqualsClass.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NullableMethodCallInstruction_EqualsClass::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::NullableMethodCallInstruction_EqualsClass::Run)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fbf370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_EqualsClass*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_EqualsClass*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullableMethodCallInstruction_EqualsClass._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NullableMethodCallInstruction_EqualsClass::*)()>(
    &::GlobalNamespace::NullableMethodCallInstruction_EqualsClass::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbf14c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_EqualsClass*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NullableMethodCallInstruction_EqualsClass::get_ConsumedStack() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_EqualsClass*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NullableMethodCallInstruction_EqualsClass::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_EqualsClass*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::NullableMethodCallInstruction_EqualsClass::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NullableMethodCallInstruction_EqualsClass*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NullableMethodCallInstruction_EqualsClass* GlobalNamespace::NullableMethodCallInstruction_EqualsClass::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NullableMethodCallInstruction_EqualsClass*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullableMethodCallInstruction_EqualsClass::NullableMethodCallInstruction_EqualsClass() {}
