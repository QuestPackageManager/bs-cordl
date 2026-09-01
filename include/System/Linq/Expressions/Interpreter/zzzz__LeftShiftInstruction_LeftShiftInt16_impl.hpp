#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\LeftShiftInstruction_LeftShiftInt16.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LeftShiftInstruction_LeftShiftInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16::Run)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f9f918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16::*)()>(&::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f9f854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::LeftShiftInstruction_LeftShiftInt16::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::LeftShiftInstruction_LeftShiftInt16::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16* GlobalNamespace::LeftShiftInstruction_LeftShiftInt16::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeftShiftInstruction_LeftShiftInt16::LeftShiftInstruction_LeftShiftInt16() {}
