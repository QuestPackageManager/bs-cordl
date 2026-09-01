#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LeftShiftInstruction_LeftShiftInt64.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64::Run)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f9fa5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64::*)()>(&::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f9f85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::LeftShiftInstruction_LeftShiftInt64::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::LeftShiftInstruction_LeftShiftInt64::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64* GlobalNamespace::LeftShiftInstruction_LeftShiftInt64::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt64::LeftShiftInstruction_LeftShiftInt64() {}
