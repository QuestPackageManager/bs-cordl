#pragma once
// IWYU pragma private; include "System\Linq\Expressions\Interpreter\RightShiftInstruction_RightShiftInt32.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_RightShiftInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RightShiftInstruction_RightShiftInt32.Run
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RightShiftInstruction_RightShiftInt32::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(
    &::GlobalNamespace::RightShiftInstruction_RightShiftInt32::Run)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5fbc704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftInt32*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftInt32*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RightShiftInstruction_RightShiftInt32._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RightShiftInstruction_RightShiftInt32::*)()>(&::GlobalNamespace::RightShiftInstruction_RightShiftInt32::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fbc57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftInt32*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::RightShiftInstruction_RightShiftInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftInt32*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, frame);
}
inline void GlobalNamespace::RightShiftInstruction_RightShiftInt32::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RightShiftInstruction_RightShiftInt32*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RightShiftInstruction_RightShiftInt32* GlobalNamespace::RightShiftInstruction_RightShiftInt32::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RightShiftInstruction_RightShiftInt32*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RightShiftInstruction_RightShiftInt32::RightShiftInstruction_RightShiftInt32() {}
